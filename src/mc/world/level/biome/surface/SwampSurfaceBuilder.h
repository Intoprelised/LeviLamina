#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ISurfaceBuilder;
// clang-format on

namespace VanillaSurfaceBuilders {

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwampSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~SwampSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@SwampSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext& entity, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@SwampSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
