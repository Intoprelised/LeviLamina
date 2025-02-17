#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/CrashDumpLogStringID.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {
public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@ServerPlayer@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 8, symbol: ?_serverInitItemStackIds@ServerPlayer@@EEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 10, symbol: ??1ServerPlayer@@UEAA@XZ
    virtual ~ServerPlayer();

    // vIndex: 29, symbol: ?normalTick@ServerPlayer@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 62, symbol: ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
    virtual bool isValidTarget(class Actor* attacker) const;

    // vIndex: 80, symbol: ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 84, symbol: ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot armorSlot, class ItemStack const& item);

    // vIndex: 91, symbol: ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 95, symbol: ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper = ::ll::defaultDataLoadHelper);

    // vIndex: 103, symbol: ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 104, symbol: ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType toId);

    // vIndex: 106, symbol: ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 107, symbol: ?checkFallDamage@ServerPlayer@@UEAAXM_N0@Z
    virtual void checkFallDamage(float, bool, bool);

    // vIndex: 123, symbol: ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectAdded(class MobEffectInstance& effect);

    // vIndex: 124, symbol: ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectUpdated(class MobEffectInstance& effect);

    // vIndex: 125, symbol: ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance& effect);

    // vIndex: 143, symbol: ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 163, symbol: ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor* source, int dmg, float xd, float zd, float, float, float heightCap);

    // vIndex: 171, symbol: ?aiStep@ServerPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 182, symbol: ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
    virtual void hurtArmorSlots(class ActorDamageSource const& source, int dmg, std::bitset<4> hurtSlots);

    // vIndex: 183, symbol: ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setDamagedArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 184, symbol: ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmorDamage(std::bitset<4> damagedSlots);

    // vIndex: 185, symbol: ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmor(std::bitset<4> armorSlots);

    // vIndex: 190, symbol: ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 191, symbol: ?sendInventory@ServerPlayer@@UEAAX_N@Z
    virtual void sendInventory(bool shouldSelectSlot);

    // vIndex: 204, symbol: ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource& mainChunkSource);

    // vIndex: 205, symbol: ?destroyRegion@ServerPlayer@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 208, symbol: ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(DimensionType dimension);

    // vIndex: 209, symbol: ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const& currentTick);

    // vIndex: 210, symbol: ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
    virtual void frameUpdate(class FrameUpdateContextBase&);

    // vIndex: 212, symbol: ?moveView@ServerPlayer@@UEAAXXZ
    virtual void moveView();

    // vIndex: 213, symbol: ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const& spawnPosition, DimensionType dimension);

    // vIndex: 214, symbol: ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const& d);

    // vIndex: 215, symbol: ?getCurrentStructureFeature@ServerPlayer@@UEBA?AW4StructureFeatureType@@XZ
    virtual ::StructureFeatureType getCurrentStructureFeature() const;

    // vIndex: 217, symbol: ?respawn@ServerPlayer@@UEAAXXZ
    virtual void respawn();

    // vIndex: 220, symbol: ?openPortfolio@ServerPlayer@@UEAAXXZ
    virtual void openPortfolio();

    // vIndex: 221, symbol: ?openBook@ServerPlayer@@UEAAXH_NHPEAVBlockActor@@@Z
    virtual void openBook(int, bool, int, class BlockActor*);

    // vIndex: 222, symbol: ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const& uniqueID, bool useNewScreen);

    // vIndex: 224, symbol: ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData> npc);

    // vIndex: 225, symbol: ?openInventory@ServerPlayer@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 228, symbol:
    // ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectMessage(class TextObjectRoot const& textObject, std::string const&, std::string const&);

    // vIndex: 229, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectWhisperMessage(
        class ResolvedTextObject const& textObject,
        std::string const&              xuid,
        std::string const&              platformId
    );

    // vIndex: 230, symbol:
    // ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void
    displayTextObjectWhisperMessage(std::string const& message, std::string const& xuid, std::string const& platformId);

    // vIndex: 231, symbol:
    // ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // vIndex: 233, symbol: ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 235, symbol: ?openSign@ServerPlayer@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const& position, bool);

    // vIndex: 237, symbol: ?isLoading@ServerPlayer@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 238, symbol: ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 240, symbol: ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType gameType);

    // vIndex: 247, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager& menu, int id, int value);

    // vIndex: 248, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void slotChanged(
        class IContainerManager& menu,
        class Container&         container,
        int                      slot,
        class ItemStack const&   oldItem,
        class ItemStack const&   newItem,
        bool                     isResultSlot
    );

    // vIndex: 249, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager& menu);

    // vIndex: 251, symbol: ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const& actor);

    // vIndex: 252, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const;

    // vIndex: 253, symbol: ?onSuspension@ServerPlayer@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 254, symbol: ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 255, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const& transaction) const;

    // vIndex: 256, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction> transaction) const;

    // vIndex: 257, symbol: ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet& packet) const;

    // vIndex: 258, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();

    // vIndex: 263, symbol: ?getMaxChunkBuildRadius@ServerPlayer@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 267, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;

    // vIndex: 268, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer();

    // vIndex: 269, symbol: ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 270, symbol: ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const& position, float minDistance);

    // symbol:
    // ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVServerNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@_NAEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H5AEAVEntityContext@@@Z
    MCAPI
    ServerPlayer(class Level&, class PacketSender&, class ServerNetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, bool, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

    // symbol: ?acceptClientPosition@ServerPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void acceptClientPosition(class Vec3 const&);

    // symbol: ?addActorToReplicationList@ServerPlayer@@QEAAXV?$not_null@PEAVActor@@@gsl@@_N@Z
    MCAPI void addActorToReplicationList(gsl::not_null<class Actor*> actor, bool);

    // symbol: ?checkCheating@ServerPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void checkCheating(class Vec3 const& clientPos);

    // symbol: ?disconnect@ServerPlayer@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?doDeleteContainerManager@ServerPlayer@@QEAAX_N@Z
    MCAPI void doDeleteContainerManager(bool);

    // symbol: ?doInitialSpawn@ServerPlayer@@QEAAXXZ
    MCAPI void doInitialSpawn();

    // symbol: ?getItemStackNetManagerServer@ServerPlayer@@QEAAAEAVItemStackNetManagerServer@@XZ
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();

    // symbol: ?handleActorPickRequestOnServer@ServerPlayer@@QEAAXAEAVActor@@_N1@Z
    MCAPI void handleActorPickRequestOnServer(class Actor& target, bool withData, bool);

    // symbol: ?handleBlockPickRequestOnServer@ServerPlayer@@QEAAXAEBVBlockPos@@_N@Z
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const& position, bool withData);

    // symbol: ?isCompatibleWithClientSideChunkGen@ServerPlayer@@QEBA_NXZ
    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    // symbol: ?openUnmanagedContainer@ServerPlayer@@QEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID openUnmanagedContainer();

    // symbol: ?postLoad@ServerPlayer@@QEAAX_N@Z
    MCAPI void postLoad(bool isNewPlayer);

    // symbol: ?postReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
    MCAPI void postReplicationTick(struct Tick const& currentTick);

    // symbol: ?preReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
    MCAPI void preReplicationTick(struct Tick const& currentTick);

    // symbol: ?selectItem@ServerPlayer@@QEAAXAEBVItemStack@@@Z
    MCAPI void selectItem(class ItemStack const& item);

    // symbol: ?sendMobEffectPackets@ServerPlayer@@QEAAXXZ
    MCAPI void sendMobEffectPackets();

    // symbol: ?sendPlayerAuthInputReceivedEvent@ServerPlayer@@QEAAXXZ
    MCAPI void sendPlayerAuthInputReceivedEvent();

    // symbol: ?sendPlayerOnGround@ServerPlayer@@QEAAXXZ
    MCAPI void sendPlayerOnGround();

    // symbol: ?setClientChunkRadius@ServerPlayer@@QEAAXIE@Z
    MCAPI void setClientChunkRadius(uint requestedRadius, uchar);

    // symbol: ?setIsCompatibleWithClientSideChunkGen@ServerPlayer@@QEAAX_N@Z
    MCAPI void setIsCompatibleWithClientSideChunkGen(bool);

    // symbol: ?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ
    MCAPI void setLocalPlayerAsInitialized();

    // symbol: ?setPlayerInput@ServerPlayer@@QEAAXMM_N0@Z
    MCAPI void setPlayerInput(float xxa, float zza, bool jumping, bool sneaking);

    // symbol: ?triggerRespawnFromCompletingTheEnd@ServerPlayer@@QEAAXXZ
    MCAPI void triggerRespawnFromCompletingTheEnd();

    // symbol: ?initializePlayerTickComponents@ServerPlayer@@SAXAEAVEntityContext@@AEBUPlayerMovementSettings@@@Z
    MCAPI static void initializePlayerTickComponents(class EntityContext&, struct PlayerMovementSettings const&);

    // symbol: ?tryGetFromEntity@ServerPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_logCDEvent@ServerPlayer@@AEAAXW4CrashDumpLogStringID@@000@Z
    MCAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // symbol: ?_nextContainerCounter@ServerPlayer@@AEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID _nextContainerCounter();

    // symbol: ?_removeNearbyEntities@ServerPlayer@@AEAAXXZ
    MCAPI void _removeNearbyEntities();

    // symbol: ?_scanForNearbyActors@ServerPlayer@@AEAAXXZ
    MCAPI void _scanForNearbyActors();

    // symbol: ?_setContainerManager@ServerPlayer@@AEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
    MCAPI void _setContainerManager(std::shared_ptr<class IContainerManager> menu);

    // symbol: ?_updateNearbyActors@ServerPlayer@@AEAAXXZ
    MCAPI void _updateNearbyActors();

    // NOLINTEND
};
