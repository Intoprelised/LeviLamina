#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

#include "magic_enum.hpp"

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/command/SoftEnum.h"
#include "ll/api/plugin/NativePlugin.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {

class CommandHandle;

class CommandRegistrar {
    friend CommandHandle;
    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistrar();

    char const* addText(CommandHandle&, std::string_view);

    [[nodiscard]] CommandRegistry& getRegistry() const;

public:
    LLNDAPI static CommandRegistrar& getInstance();

    LLNDAPI CommandHandle& getOrCreateCommand(
        std::string const&            name,
        std::string const&            description = {},
        CommandPermissionLevel        requirement = CommandPermissionLevel::Any,
        CommandFlag                   flag        = CommandFlagValue::NotCheat,
        std::weak_ptr<plugin::Plugin> plugin      = plugin::NativePlugin::current()
    );

    LLAPI bool hasEnum(std::string const& name);

    LLAPI bool tryRegisterEnum(
        std::string const&                          name,
        std::vector<std::pair<std::string, uint64>> values,
        Bedrock::typeid_t<CommandRegistry>          type,
        CommandRegistry::ParseFn                    parser
    );

    LLAPI bool addEnumValues(
        std::string const&                          name,
        std::vector<std::pair<std::string, uint64>> values,
        Bedrock::typeid_t<CommandRegistry>          type
    );

    LLAPI bool hasSoftEnum(std::string const& name);

    LLAPI bool tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values);

    LLAPI bool addSoftEnumValues(std::string const& name, std::vector<std::string> values);

    LLAPI bool removeSoftEnumValues(std::string const& name, std::vector<std::string> values);

    LLAPI bool setSoftEnumValues(std::string const& name, std::vector<std::string> values);

    template <concepts::Require<std::is_enum> T>
    inline bool tryRegisterEnum() {
        static std::vector<std::pair<std::string, uint64>> values{[] {
            std::vector<std::pair<std::string, uint64>> vals;
            magic_enum::enum_for_each<T>([&](T enumVal) {
                vals.emplace_back(magic_enum::enum_name(enumVal), (uint64)enumVal);
            });
            return vals;
        }()};
        return tryRegisterEnum(::ll::command::enum_name_v<T>, values, Bedrock::type_id<CommandRegistry, T>(), &CommandRegistry::parse<T>);
    }

    template <concepts::Specializes<SoftEnum> T>
    inline bool tryRegisterSoftEnum() {
        static std::vector<std::string> values{[] {
            std::vector<std::string> vals;
            magic_enum::enum_for_each<remove_soft_enum_t<T>>([&](remove_soft_enum_t<T> enumVal) {
                vals.emplace_back(magic_enum::enum_name(enumVal));
            });
            return vals;
        }()};
        return tryRegisterSoftEnum(::ll::command::enum_name_v<T>, values);
    }
};
} // namespace ll::command
