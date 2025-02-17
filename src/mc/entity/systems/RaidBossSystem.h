#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class RaidBossSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    RaidBossSystem& operator=(RaidBossSystem const&);
    RaidBossSystem(RaidBossSystem const&);
    RaidBossSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RaidBossSystem@@UEAA@XZ
    virtual ~RaidBossSystem() = default;

    // vIndex: 2, symbol: ?tick@RaidBossSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
