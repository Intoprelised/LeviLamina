#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentMoveCommandSystem& operator=(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentMoveCommandSystem@@UEAA@XZ
    virtual ~AgentMoveCommandSystem() = default;

    // vIndex: 2, symbol: ?tick@AgentMoveCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol: ?cleanUp@AgentMoveCommandSystem@@SAXAEAVEntityContext@@M@Z
    MCAPI static void cleanUp(class EntityContext& agent, float cooldownTime);

    // symbol:
    // ?initialize@AgentMoveCommandSystem@@SAXAEAVEntityContext@@AEAUActionDetails@AgentComponents@@AEAVMove@4@@Z
    MCAPI static void
    initialize(class EntityContext& entity, struct AgentComponents::ActionDetails& details, class AgentComponents::Move&);

    // symbol: ?tickMove@AgentMoveCommandSystem@@SAXAEAVEntityContext@@AEAUActionDetails@AgentComponents@@AEAVMove@4@@Z
    MCAPI static void
    tickMove(class EntityContext& entity, struct AgentComponents::ActionDetails& details, class AgentComponents::Move&);

    // NOLINTEND
};
