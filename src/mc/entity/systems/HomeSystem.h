#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HomeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HomeSystem& operator=(HomeSystem const&);
    HomeSystem(HomeSystem const&);
    HomeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HomeSystem@@UEAA@XZ
    virtual ~HomeSystem() = default;

    // vIndex: 2, symbol: ?tick@HomeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@HomeSystem@@CAXAEAVActorOwnerComponent@@AEAVHomeComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&);

    // NOLINTEND
};
