#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/Side.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Boat : public ::Actor {
public:
    // prevent constructor by default
    Boat& operator=(Boat const&);
    Boat(Boat const&);
    Boat();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Boat@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Boat@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Boat@@UEAA@XZ
    virtual ~Boat() = default;

    // vIndex: 23, symbol: ?breaksFallingBlocks@Boat@@UEBA_NXZ
    virtual bool breaksFallingBlocks() const;

    // vIndex: 29, symbol: ?normalTick@Boat@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 34, symbol:
    // ?getExitTip@Boat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const& kind, ::InputMode mode, ::NewInteractionModel) const;

    // vIndex: 41, symbol: ?getShadowRadius@Boat@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 48, symbol: ?isPickable@Boat@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 75, symbol: ?isInvulnerableTo@Boat@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 106, symbol: ?getControllingPlayer@Boat@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 110, symbol: ?canAddPassenger@Boat@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 133, symbol: ?getPassengerYRotation@Boat@@UEBAMAEBVActor@@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 158, symbol: ?_hurt@Boat@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 163, symbol: ?destroy@Boat@@UEAAXPEAVActor@@@Z
    virtual void destroy(class Actor* source);

    // symbol: ??0Boat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Boat(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getWoodID@Boat@@QEBAEXZ
    MCAPI uchar getWoodID() const;

    // symbol: ?postNormalTick@Boat@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setRowingTime@Boat@@QEAAXW4Side@@M@Z
    MCAPI void setRowingTime(::Side side, float time);

    // NOLINTEND
};
