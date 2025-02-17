#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GrowCropSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GrowCropSystem& operator=(GrowCropSystem const&);
    GrowCropSystem(GrowCropSystem const&);
    GrowCropSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrowCropSystem@@UEAA@XZ
    virtual ~GrowCropSystem() = default;

    // vIndex: 2, symbol: ?tick@GrowCropSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
