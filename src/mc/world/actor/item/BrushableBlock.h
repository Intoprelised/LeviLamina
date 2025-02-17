#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BrushableBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    BrushableBlock& operator=(BrushableBlock const&);
    BrushableBlock(BrushableBlock const&);
    BrushableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BrushableBlock@@UEAA@XZ
    virtual ~BrushableBlock() = default;

    // vIndex: 79, symbol:
    // ?onFertilized@BrushableBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@BrushableBlock@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 81, symbol: ?canBeFertilized@BrushableBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const& aboveBlock) const;

    // vIndex: 96, symbol: ?asItemInstance@BrushableBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const* blockActor) const;

    // vIndex: 129, symbol: ?getVariant@BrushableBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 136, symbol: ?init@BrushableBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 150, symbol: ?tick@BrushableBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163, symbol: ?getResourceItem@BrushableBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 165, symbol: ?getSilkTouchItemInstance@BrushableBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // vIndex: 168, symbol: ?getDustColor@BrushableBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 169, symbol:
    // ?getDustParticleName@BrushableBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 171, symbol: ?onLand@BrushableBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0BrushableBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BrushableBlock(std::string const& nameID, int id);

    // symbol: ?EmptyBrushedBlock@BrushableBlock@@2VHashedString@@B
    MCAPI static class HashedString const EmptyBrushedBlock;

    // NOLINTEND
};
