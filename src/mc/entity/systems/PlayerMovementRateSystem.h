#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class PlayerMovementRateSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    PlayerMovementRateSystem& operator=(PlayerMovementRateSystem const&);
    PlayerMovementRateSystem(PlayerMovementRateSystem const&);
    PlayerMovementRateSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerMovementRateSystem@@UEAA@XZ
    virtual ~PlayerMovementRateSystem() = default;

    // vIndex: 2, symbol: ?tick@PlayerMovementRateSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
