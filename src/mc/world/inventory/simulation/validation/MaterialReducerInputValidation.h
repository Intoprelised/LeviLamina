#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    MaterialReducerInputValidation& operator=(MaterialReducerInputValidation const&);
    MaterialReducerInputValidation(MaterialReducerInputValidation const&);
    MaterialReducerInputValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MaterialReducerInputValidation@@UEAA@XZ
    virtual ~MaterialReducerInputValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const& container, int slot) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@MaterialReducerInputValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    // vIndex: 4, symbol: ?isItemAllowedToAdd@MaterialReducerInputValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const& item) const;

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 8, symbol: ?getContainerOffset@MaterialReducerInputValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // symbol: ??0MaterialReducerInputValidation@@QEAA@AEBVContainerScreenContext@@@Z
    MCAPI explicit MaterialReducerInputValidation(class ContainerScreenContext const&);

    // NOLINTEND
};
