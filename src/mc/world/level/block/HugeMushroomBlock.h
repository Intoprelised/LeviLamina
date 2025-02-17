#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MushroomOuterType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HugeMushroomBlock : public ::BlockLegacy {
public:
    // HugeMushroomBlock inner types define
    enum class Type {};

public:
    // prevent constructor by default
    HugeMushroomBlock& operator=(HugeMushroomBlock const&);
    HugeMushroomBlock(HugeMushroomBlock const&);
    HugeMushroomBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HugeMushroomBlock@@UEAA@XZ
    virtual ~HugeMushroomBlock() = default;

    // vIndex: 96, symbol: ?asItemInstance@HugeMushroomBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@HugeMushroomBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@HugeMushroomBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 162, symbol:
    // ?getMapColor@HugeMushroomBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 163, symbol: ?getResourceItem@HugeMushroomBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 164, symbol: ?getResourceCount@HugeMushroomBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& randomize, class Block const&, int) const;

    // vIndex: 165, symbol: ?getSilkTouchItemInstance@HugeMushroomBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // symbol:
    // ??0HugeMushroomBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@W4Type@0@@Z
    MCAPI HugeMushroomBlock(
        std::string const&        nameId,
        int                       id,
        class Material const&     material,
        ::HugeMushroomBlock::Type type
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getBlockItemWithState@HugeMushroomBlock@@AEBA?AVItemInstance@@AEBVBlock@@W4MushroomOuterType@@@Z
    MCAPI class ItemInstance _getBlockItemWithState(class Block const& block, ::MushroomOuterType state) const;

    // NOLINTEND
};
