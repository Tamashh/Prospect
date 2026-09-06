#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "EYGenericClaimableOrigin.h"
#include "EYActivityType.h"
#include "EYAnnouncementType.h"
#include "EYReportPlayerType.h"
#include "YCheatManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UYCheatManager();

private:
    UFUNCTION(BlueprintCallable, Exec)
    static void YToggleVSDebugger();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YSkipMatchState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YSendInboxMessage(const FString& messageRowId, const FString& grantRowId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YResetPlayerData() const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void YPrintDebugStringToScreen(const FString& debugString) const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    static void YLogAsyncLoadingQueue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YLeaveSquad() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YInfiniteInteractions() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YGotoPerformanceCameraActor(FName cameraName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YGiveProspectorLevelXP(int32 XPToGive) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YGivePerk(FName RowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YGetRequiredProspectorLevelXPForNextLevel(int32 currentLevel) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YGCSafe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YForceSquadMembersUpdate() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YForceResetGameplayDebugger() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YForceCompleteSquadUpdate() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YFlushAsyncLoading();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YFetchPlatformEntitlements() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDeclineSquadInvite(const FString& inviteId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugVivoxLogData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdatePresenceState(int32 State);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdateDeveloperMode(bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUnsubscribeMarketingEmail() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTriggerServerInventoryConcurrencyTest() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTriggerPopUp(const FName& RowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTriggerInventoryConcurrencyTest() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTriggerIdleKick() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTravelToMatchStation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTravelToMatchMap(const FString& mapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleWeaponTransportDebug() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleWeaponSpread() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleWeaponFireRegistry() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleSorting(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleOnScreenVisualization() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleMapMarkers() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugToggleInfiniteStamina() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugToggleInfiniteDBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleInfiniteClip() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleInfiniteAmmo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugToggleImpactDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleGPA() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleGameplayDebugger() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugToggleFastMovement() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleEOSLogging(bool shallLog);
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugToggleEncumberance() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugToggleDrawWeaponCollisionPrimitives();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugToggleDrawCollisionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleDiscountedPricesSteam(bool useDiscountedPrices);

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleCustomOcclusionTraceSize(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleCustomOcclusionTracePositions(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleCustomOcclusionTraceDirections(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleCameraStartsFollowRecoil() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleAudioEffectZoneSoundDisplay(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleAudioEffectZoneDisplay(bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleAimAssistInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugToggleAbilityCooldowns() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTeleportRandomLocation(int32 State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTeleportMeToActivity(bool randomizePosition) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugTeleportMeInRange(int32 InRange) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStatsInitialize() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartTutorial();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartSessionState(int32 State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartScene(const FString& sceneName, bool doNpcTransition) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartMissionLine(const FString& missionArcId, const FString& missionId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartMatchmakingWithMap(const FString& fullMapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartMatchmakingWithDebugOption(int32 instanceType, int32 debugOption);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStartMatchmaking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSpawnBackgroundDropPod() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSocialRemoveFriend(const FString& targetPlayFabId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSocialManagerState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSocialDeclineFriendRequest(const FString& targetPlayFabId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSocialAddFriend(const FString& targetPlayFabId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSocialAcceptFriendRequest(const FString& targetPlayFabId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugSleepThread(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSkipLegalAgreements() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugShowMatchmakingSkill() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugShowCameraCollision();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugShopTryOfferCheckout(const FString& OfferId, int32 quantity);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugSetWeakspotDebugDuration(float Duration);

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetVanityMigrationState(const FString& State) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetTutorialUserDataTutorialFlag(bool flag) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetTechTreeNodeLevel(const FString& nodeId, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetStatsBatched() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetStat(const FString& statName, const FString& gameModeType, const int32& activityType, int32 NewValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetStashLimit(int32 stashLimit) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetSortingLayerRowHandle(const FString& rowHandleId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetSharedState(bool newState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetShard(int32 shardIndex) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetSessionState(const FString& SessionId, int32 matchState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetRecoilValue(float newRecoilValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetPlayerQuartersLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetPing(const FString& Region, int32 Ping) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMuteState(bool setMuted, float Duration) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMissionCount(const FString& missionId, const FString& missionArcId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMissionCompleted(const FString& missionId, const FString& missionArcId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMissionActive(const FString& missionArcId, const FString& missionId, bool newState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMissionAcknowledged(const FString& missionArcId, const FString& missionId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetMatchTime(int32 newTime) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetLocalSquadId(const FString& squadId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetGlobalVanityLocal(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetGlobalVanityIdBackend(const FString& ID, int32 variation, int32 slotId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetFeatureToggleFlag(const FName& featureToggleName, int32 newState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetEquippedArchetypeBeforeVanityMigration() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetCharacterRelevancyDistance(int32 newRelevancyDistance) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetBagLimit(int32 bagLimit) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetAllNodesHighestLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetAdditionalPing(float pingAddition) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetActiveOnboardingMission(const FString& missionId, int32 stepId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetActiveContractProgress(const FString& contractId, int32 objectiveIndex, int32 newProgress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSendTestFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSendServerFPSSummary() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSendNotification(FName notificationRow, TMap<FString, FString> textParameters, TMap<FString, FString> localizedParameters) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSendLogFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSearchUserName(const FString& Username) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSeamlessTravel(const FString& towards, int32 TravelType, bool seamless) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetTutorialFlag() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetTechTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetStats() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetPlayer() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetPersistentMatch() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetOnboardingProgress() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetMission(const FString& missionArcId, const FString& missionId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetInitialize() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetGenerator(const FString& generatorId) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetFactionProgress(const FString& factionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetAllGenerators() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetAllFactionsProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRerollWeeklyChallenges() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRerollDailyChallenges() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRerollChallenges(int32 Type) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestUpdatedSessionState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestTravel(bool loadMapDirectly) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestResourceStateChange(bool clearResources) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestInventoryRefresh() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestGenericClaimableData() const;

    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugReportPlayer(const EYReportPlayerType reportType, const FString& UserId, const FString& Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveVanityID(const FString& vanityId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveUserFromLocalSquad(const FString& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveTournamentUser();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveThisUserFromAcceptedLegalAgreements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveHighlightItemType(int32 ItemType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveFriendUserId(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveDebugText(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllText() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllMaterialsFromPlayer(const FName& UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllMaterials() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllItemsFromPlayer(const FName& UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllItemsByTypeFromPlayer(const FName& UserId, const FString& ItemType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllItemsByType(const FString& ItemType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllItems() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllFriends();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRemoveAllActiveContracts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRegisterForMarketing(const FString& Email, const FString& Locale) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRefreshAndLogActiveContractProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugReduceTechTreeUpgradeTime(int32 Duration) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugReducePlayerQuartersUpgradeTime(int32 Duration) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugReduceCraftingTime(int32 Duration) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRedeemCoupon(const FString& CouponCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugReconnectSignalR() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRebuildInventory() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugQueueAnnouncement(FName RowName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugQueryStats() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPushStatsUpdate() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugPurchaseOffer(const FString& OfferId, int32 quantity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugProfanityWord(const FString& inWord) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintStats(int32 serverData) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintServerPerfDataToLog() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintRelevancyLookup() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintPlayerStates() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintNetworkTime() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintMissionData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintInputInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintFlyingNavigationMemoryUsage() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugPrintCheckedAssetTypes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPreviousSortingLayer() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPlayAnnouncement(FName RowName, EYAnnouncementType announcementType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugOutputStateComponentDebugData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugNotifyArrayIndex(int32 ArrayIndex) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugNextSortingLayer() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugMutelistRemoveEntry(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugMutelistList();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugMutelistAddEntry(const FString& PlayerId, bool muteChat, bool muteVoicechat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugModifyUserSkill(int32 skill, int32 deviation) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugMatchmakingSetUserNVR(int32 nvr) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugMatchmakingListUserInfoRequest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugMatchmakeToSessionId(const FString& SessionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugMatchHasEnded() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugMakeChannelIDActiveVoice(int32 ChannelType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogWeaponInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogSessionInformation() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogPlayerVanity() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogPlayerStates() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogPlayerInitializationData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogoutVivox(bool tryReconnect) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogin(const FString& Username, const FString& Password) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogAllFactionsProgress() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogAllConnectUserIds() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListSquadInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListPersistentMatches();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListPendingFriendRequests() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListMatchmakingSettings() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListInteractingContainerInventory() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListIngameInventory() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListFriendsList() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListFeatureToggles() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedStores() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedRotatingStores() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedPlatformEntitlements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedOnlineOffers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedNotifications() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugListCachedInboxMessages();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedGrants() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListCachedGenericClaimableData() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListAcceptedLegalAgreements() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLightning(int32 lightningDebugLevel) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLeaveStationInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLeaveSquad() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugKillAllCurrentAI() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugKickLocalUser(const FString& Reason) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugJoinSquad(const FString& squadId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugInteractionTrace();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugInspectCoupon(const FString& CouponCode);

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugInitializationDebugState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugIncreaseStat(const FString& statName, const FString& gameModeType, const int32& activityType, int32 incrementValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugImportFriendsFromCurrentPlatform() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugImmortalMode() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugHighlightItemStringId(const FString& ID, bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugHighlightItemRowId(const FString& ID, bool State) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugHighlightAssociationItemType(int32 ItemType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGrantVanity(const FName& vanityId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGrantItem(const FName& ItemId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGrantAllVanity_Task(const FString& vanityType) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugGodMode() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugGiveSteamInventoryItem(const int32 itemDef, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGivePlayerContractRewards(const FString& contractId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveMod(FName RowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGetVanityWithGenderSuffix() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGetStat(const FString& statName, const FString& gameModeType, const FString& activityType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGetSelectedVanityItemWithGenderSuffix(const FString& ItemId) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGetAIStats() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGenerateServerStationReport() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFriendInviteUserID(const FString& UserId, bool immediateAccept);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceTOCMigration(const FString& epicId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceRepinging() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceRefreshContractsBoards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceInterruptionTravel() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceFriendListRefresh() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceFetchPlayFabStore(const FString& StoreId, const FString& CatalogVersion) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceFetchAllPlayFabStores() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugForceClientUpdate() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugExecuteAzureFunction(const FString& FunctionName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugEscape() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugEnfOfMatchStats(int32 Placement, int32 playerResult, const FString& Mode) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugDumpSocialInformation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpRegisteredWorldMarkerTargets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpPingStats() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpNPCInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpNetworkActors() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpLoginAuthToken() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpLatencyAnalytics() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugDumpInputState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpInitializationData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpHighlightState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpDragState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpCustomizationData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpActiveWorldMarkers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDumpAbilityAnalytics() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void YDebugDrawStatesDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDisplayTrackedMessages();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugDestroyFromClass(const FString& ClassName, int32 replicateServer) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCreateChannel(const FString& channelId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCraftItemFromShopWithRarity(const FName& blueprintName, const FString& fromShop, int32 bpRarity) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCraftItemAllShopsAllRarities(const FName& blueprintName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugConnectionStarted() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugConfirmMarketingEmail() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCompleteContract(const FString& contractId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearSpecificCompletedOneTimeContract(const FString& contractId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearPopupConfigEntries() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearLocalSquad() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearChannel(const FString& channelId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearAllMissionLines() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearAllHighlighting() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClearAllCompletedContracts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClaimGenericClaimableData(const FString& ID, const EYGenericClaimableOrigin Origin) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugChangeServerStationShardBackend(int32 shardIndex) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugChangeCountryCurrencySteam(const FString& CurrencyCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugChangeBodyPart(const FString& ID, int32 Type, int32 colorVariation) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugBattleEyeSimpleCommand(const FString& Command) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugBattleEyePlayerActionComplex(const FString& PlayerId, int32 Type, int32 Min) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugBattleEyePlayerAction(const FString& PlayerId, int32 Type) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugBattleEyeComplexCommand(const FString& Command, const FString& Payload) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugBanLocalUser(const FString& Reason) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAutomationData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddVoipBattleLogEncounter() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddVanityIDAmount(const FString& vanityId, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddUserToLocalSquad(const FString& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddTournamentUser();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddRecentlyPlayed(const FString& UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddPlayerImpulse(float Impulse) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddNotification(int32 Type, int32 messageType, bool isPermanent, const FString& Name, const FString& Message) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddInventoryCurrency(const FString& currencyName, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddFactionProgress(const FString& factionId, int32 repIncrese);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddDebugText(const FString& DebugText, int32 colorType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddAllVanityOfType(int32 vanityType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugActivateContractWithPredecessor(const FString& contractId);

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugActivateContractByRowName(const FString& contractId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugActionFriendInvites(bool accept);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YClearInventory() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YActivitiesShowMinimapDebug(EYActivityType Type) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YAcceptSquadInvite(const FString& inviteId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void Volume(float NewVolume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugMenu() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide(float Timer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMatch() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ShowMousePosition();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowItemsOfPlayer(FName UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowItems() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowCraftingMaterialsOfPlayer(const FName& UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowCraftingMaterials() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetVolume(float NewVolume);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetUnfocusedVolumeMultiplier(float NewVolume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSelectedFaction(const FString& factionId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMatchTimer(int32 remainingSeconds) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaintainYFOV() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaintainXFOV() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCraftingMaterialAmountOfPlayer(const FName& UserId, const FName& materialName, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCraftingMaterialAmount(const FName& materialName, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllCraftingMaterialsAmountOfPlayer(const FName& UserId, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllCraftingMaterialsAmount(int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerEnableDebugCamera();

    UFUNCTION(BlueprintCallable, Exec)
    void SendTestAnalyticsEvent() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Revive() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSession(FName ServerId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllWaitingRooms() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestFriendsList() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveItemFromPlayer(FName UserId, FName ItemId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveItem(FName ItemId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllItemsFromPlayer(FName UserId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllItems() const;
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintDebugStringToScreen(UObject* WorldContextObject, const FString& debugString);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllDebugEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MakeUIScreenshot(const FString& ScreenshotName, const FString& subfoldername) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListRooms() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ListQueues();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HealSelf(float healAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void HangMe();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ForceStartMatch(const FString& GameMode, bool isRanked, const FString& Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeLoginResponse(int32 code) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Execute() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetForceShowPlayerMarkers(bool IsEnabled) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPickupActorsInRange(int32 Range) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMarkerForActorInRange(int32 Range) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageSelf(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void CrashMeNullptr();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BypassLoginScreen() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    static void BugReportTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BugReport(const FString& Title, const FString& Description) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddItemToPlayer(FName UserId, FName ItemId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddItem(FName ItemId) const;
    
};

