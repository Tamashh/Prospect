#include "YCheatManager.h"
#include "YDebugCameraController.h"

UYCheatManager::UYCheatManager() {
    this->DebugCameraControllerClass = AYDebugCameraController::StaticClass();
}

void UYCheatManager::YToggleVSDebugger() {
}

void UYCheatManager::YToggleAIPrototypeSpawning() const {
}

void UYCheatManager::YSkipMatchState() const {
}

void UYCheatManager::YSendInboxMessage(const FString& messageRowId, const FString& grantRowId) const {
}

void UYCheatManager::YResetPlayerData() const {
}

void UYCheatManager::YPrintDebugStringToScreen(const FString& debugString) const {
}

void UYCheatManager::YLogAsyncLoadingQueue() {
}

void UYCheatManager::YLeaveSquad() const {
}

void UYCheatManager::YInfiniteInteractions() const {
}

void UYCheatManager::YGotoPerformanceCameraActor(FName cameraName) const {
}

void UYCheatManager::YGiveProspectorLevelXP(int32 XPToGive) const {
}

void UYCheatManager::YGivePerk(FName RowName) const {
}

void UYCheatManager::YGetRequiredProspectorLevelXPForNextLevel(int32 currentLevel) const {
}

void UYCheatManager::YGCSafe() {
}

void UYCheatManager::YForceSquadMembersUpdate() const {
}

void UYCheatManager::YForceResetGameplayDebugger() const {
}

void UYCheatManager::YForceCompleteSquadUpdate() const {
}

void UYCheatManager::YFlushAsyncLoading() {
}

void UYCheatManager::YFetchPlatformEntitlements() const {
}

void UYCheatManager::YDeclineSquadInvite(const FString& inviteId) const {
}

void UYCheatManager::YDebugVivoxLogData() const {
}

void UYCheatManager::YDebugUpdatePresenceState(int32 State) {
}

void UYCheatManager::YDebugUpdateDeveloperMode(bool Enabled) {
}

void UYCheatManager::YDebugTriggerServerInventoryConcurrencyTest() const {
}

void UYCheatManager::YDebugTriggerPopUp(const FName& RowName) const {
}

void UYCheatManager::YDebugTriggerInventoryConcurrencyTest() const {
}

void UYCheatManager::YDebugTriggerIdleKick() const {
}

void UYCheatManager::YDebugTravelToMatchStation() {
}

void UYCheatManager::YDebugTravelToMatchMap(const FString& mapName) {
}

void UYCheatManager::YDebugToggleWeaponTransportDebug() const {
}

void UYCheatManager::YDebugToggleWeaponSpread() const {
}

void UYCheatManager::YDebugToggleWeaponFireRegistry() const {
}

void UYCheatManager::YDebugToggleSorting(bool State) const {
}

void UYCheatManager::YDebugToggleOnScreenVisualization() const {
}

void UYCheatManager::YDebugToggleMapMarkers() const {
}

void UYCheatManager::YDebugToggleInfiniteStamina() const {
}

void UYCheatManager::YDebugToggleInfiniteDBNO() {
}

void UYCheatManager::YDebugToggleInfiniteClip() const {
}

void UYCheatManager::YDebugToggleInfiniteAmmo() const {
}

void UYCheatManager::YDebugToggleImpactDebug() {
}

void UYCheatManager::YDebugToggleGPA() const {
}

void UYCheatManager::YDebugToggleGameplayDebugger() const {
}

void UYCheatManager::YDebugToggleFastMovement() const {
}

void UYCheatManager::YDebugToggleEOSLogging(bool shallLog) {
}

void UYCheatManager::YDebugToggleEncumberance() const {
}

void UYCheatManager::YDebugToggleDrawWeaponCollisionPrimitives() {
}

void UYCheatManager::YDebugToggleDrawCollisionDebug() {
}

void UYCheatManager::YDebugToggleCustomOcclusionTraceSize(bool State) const {
}

void UYCheatManager::YDebugToggleCustomOcclusionTracePositions(bool State) const {
}

void UYCheatManager::YDebugToggleCustomOcclusionTraceDirections(bool State) const {
}

void UYCheatManager::YDebugToggleCameraStartsFollowRecoil() const {
}

void UYCheatManager::YDebugToggleAudioEffectZoneSoundDisplay(bool State) const {
}

void UYCheatManager::YDebugToggleAudioEffectZoneDisplay(bool State) const {
}

void UYCheatManager::YDebugToggleAimAssistInfo() const {
}

void UYCheatManager::YDebugToggleAbilityCooldowns() const {
}

void UYCheatManager::YDebugTeleportRandomLocation(int32 State) const {
}

void UYCheatManager::YDebugTeleportMeToActivity(bool randomizePosition) const {
}

void UYCheatManager::YDebugTeleportMeInRange(int32 InRange) const {
}

void UYCheatManager::YDebugStatsInitialize() const {
}

void UYCheatManager::YDebugStartTutorial() {
}

void UYCheatManager::YDebugStartSessionState(int32 State) const {
}

void UYCheatManager::YDebugStartScene(const FString& sceneName, bool doNpcTransition) const {
}

void UYCheatManager::YDebugStartMissionLine(const FString& missionArcId, const FString& missionId) const {
}

void UYCheatManager::YDebugStartMatchmakingWithMap(const FString& fullMapName) {
}

void UYCheatManager::YDebugStartMatchmakingWithDebugOption(int32 instanceType, int32 debugOption) {
}

void UYCheatManager::YDebugStartMatchmaking() {
}

void UYCheatManager::YDebugSpawnBackgroundDropPod() const {
}

void UYCheatManager::YDebugSocialRemoveFriend(const FString& targetPlayFabId) const {
}

void UYCheatManager::YDebugSocialManagerState() const {
}

void UYCheatManager::YDebugSocialDeclineFriendRequest(const FString& targetPlayFabId) const {
}

void UYCheatManager::YDebugSocialAddFriend(const FString& targetPlayFabId) const {
}

void UYCheatManager::YDebugSocialAcceptFriendRequest(const FString& targetPlayFabId) const {
}

void UYCheatManager::YDebugSleepThread(float TimeInSeconds) {
}

void UYCheatManager::YDebugSkipLegalAgreements() const {
}

void UYCheatManager::YDebugShowMatchmakingSkill() const {
}

void UYCheatManager::YDebugShowCameraCollision() {
}

void UYCheatManager::YDebugShopTryOfferCheckout(const FString& OfferId, int32 quantity) {
}

void UYCheatManager::YDebugSetTutorialUserDataTutorialFlag(bool flag) const {
}

void UYCheatManager::YDebugSetTechTreeNodeLevel(const FString& nodeId, int32 Level) {
}

void UYCheatManager::YDebugSetStatsBatched() const {
}

void UYCheatManager::YDebugSetStat(const FString& statName, const FString& gameModeType, const int32& activityType, int32 NewValue) const {
}

void UYCheatManager::YDebugSetStashLimit(int32 stashLimit) const {
}

void UYCheatManager::YDebugSetSortingLayerRowHandle(const FString& rowHandleId) const {
}

void UYCheatManager::YDebugSetSharedState(bool newState) const {
}

void UYCheatManager::YDebugSetShard(int32 shardIndex) const {
}

void UYCheatManager::YDebugSetSessionState(const FString& SessionId, int32 matchState) {
}

void UYCheatManager::YDebugSetRecoilValue(float newRecoilValue) const {
}

void UYCheatManager::YDebugSetPlayerQuartersLevel(int32 Level) {
}

void UYCheatManager::YDebugSetPing(const FString& Region, int32 Ping) const {
}

void UYCheatManager::YDebugSetMuteState(bool setMuted, float Duration) const {
}

void UYCheatManager::YDebugSetMissionCount(const FString& missionId, const FString& missionArcId) const {
}

void UYCheatManager::YDebugSetMissionCompleted(const FString& missionId, const FString& missionArcId) const {
}

void UYCheatManager::YDebugSetMissionActive(const FString& missionArcId, const FString& missionId, bool newState) const {
}

void UYCheatManager::YDebugSetMissionAcknowledged(const FString& missionArcId, const FString& missionId) const {
}

void UYCheatManager::YDebugSetMatchTime(int32 newTime) const {
}

void UYCheatManager::YDebugSetLocalSquadId(const FString& squadId) const {
}

void UYCheatManager::YDebugSetGlobalVanityLocal(const FString& ID) const {
}

void UYCheatManager::YDebugSetGlobalVanityIdBackend(const FString& ID, int32 variation, int32 slotId) const {
}

void UYCheatManager::YDebugSetFeatureToggleFlag(const FName& featureToggleName, int32 newState) const {
}

void UYCheatManager::YDebugSetCharacterRelevancyDistance(int32 newRelevancyDistance) const {
}

void UYCheatManager::YDebugSetBagLimit(int32 bagLimit) const {
}

void UYCheatManager::YDebugSetAllNodesHighestLevel() {
}

void UYCheatManager::YDebugSetAdditionalPing(float pingAddition) const {
}

void UYCheatManager::YDebugSetActiveOnboardingMission(const FString& missionId, int32 stepId) const {
}

void UYCheatManager::YDebugSetActiveContractProgress(const FString& contractId, int32 objectiveIndex, int32 newProgress) {
}

void UYCheatManager::YDebugSendTestFile() {
}

void UYCheatManager::YDebugSendServerFPSSummary() const {
}

void UYCheatManager::YDebugSendNotification(FName notificationRow, TMap<FString, FString> textParameters, TMap<FString, FString> localizedParameters) const {
}

void UYCheatManager::YDebugSendLogFile() {
}

void UYCheatManager::YDebugSearchUserName(const FString& Username) const {
}

void UYCheatManager::YDebugSeamlessTravel(const FString& towards, int32 TravelType, bool seamless) const {
}

void UYCheatManager::YDebugResetTutorialFlag() const {
}

void UYCheatManager::YDebugResetTechTree() {
}

void UYCheatManager::YDebugResetStats() const {
}

void UYCheatManager::YDebugResetPlayer() const {
}

void UYCheatManager::YDebugResetPersistentMatch() const {
}

void UYCheatManager::YDebugResetPassiveGenerator(const FString& generatorId) const {
}

void UYCheatManager::YDebugResetOnboardingProgress() const {
}

void UYCheatManager::YDebugResetMission(const FString& missionArcId, const FString& missionId) const {
}

void UYCheatManager::YDebugResetInitialize() const {
}

void UYCheatManager::YDebugResetFactionProgress(const FString& factionId) {
}

void UYCheatManager::YDebugResetAllPassiveGenerators() const {
}

void UYCheatManager::YDebugResetAllFactionsProgress() {
}

void UYCheatManager::YDebugRerollWeeklyChallenges() const {
}

void UYCheatManager::YDebugRerollDailyChallenges() const {
}

void UYCheatManager::YDebugRerollChallenges(int32 Type) const {
}

void UYCheatManager::YDebugRequestUpdatedSessionState() {
}

void UYCheatManager::YDebugRequestTravel(bool loadMapDirectly) const {
}

void UYCheatManager::YDebugRequestResourceStateChange(bool clearResources) const {
}

void UYCheatManager::YDebugRequestInventoryRefresh() const {
}

void UYCheatManager::YDebugReportPlayer(const EYReportPlayerType reportType, const FString& UserId, const FString& Message) {
}

void UYCheatManager::YDebugRemoveVanityID(const FString& vanityId) const {
}

void UYCheatManager::YDebugRemoveUserFromLocalSquad(const FString& PlayerId) const {
}

void UYCheatManager::YDebugRemoveTournamentUser() {
}

void UYCheatManager::YDebugRemoveThisUserFromAcceptedLegalAgreements() {
}

void UYCheatManager::YDebugRemoveHighlightItemType(int32 ItemType) const {
}

void UYCheatManager::YDebugRemoveFriendUserId(const FString& UserId) {
}

void UYCheatManager::YDebugRemoveDebugText(int32 Handle) const {
}

void UYCheatManager::YDebugRemoveAllText() const {
}

void UYCheatManager::YDebugRemoveAllMaterialsFromPlayer(const FName& UserId) const {
}

void UYCheatManager::YDebugRemoveAllMaterials() const {
}

void UYCheatManager::YDebugRemoveAllItemsFromPlayer(const FName& UserId) const {
}

void UYCheatManager::YDebugRemoveAllItemsByTypeFromPlayer(const FName& UserId, const FString& ItemType) const {
}

void UYCheatManager::YDebugRemoveAllItemsByType(const FString& ItemType) const {
}

void UYCheatManager::YDebugRemoveAllItems() const {
}

void UYCheatManager::YDebugRemoveAllFriends() {
}

void UYCheatManager::YDebugRemoveAllActiveContracts() {
}

void UYCheatManager::YDebugRefreshAndLogActiveContractProgress() {
}

void UYCheatManager::YDebugReduceTechTreeUpgradeTime(int32 Duration) const {
}

void UYCheatManager::YDebugReducePlayerQuartersUpgradeTime(int32 Duration) const {
}

void UYCheatManager::YDebugReduceCraftingTime(int32 Duration) const {
}

void UYCheatManager::YDebugRedeemPlayfabCoupon(const FString& CouponCode, const FString& CatalogVersion) {
}

void UYCheatManager::YDebugReconnectSignalR() const {
}

void UYCheatManager::YDebugRebuildInventory() const {
}

void UYCheatManager::YDebugQueueAnnouncement(FName RowName) {
}

void UYCheatManager::YDebugQueryStats() const {
}

void UYCheatManager::YDebugPushStatsUpdate() const {
}

void UYCheatManager::YDebugPurchaseOffer(const FString& OfferId, int32 quantity) {
}

void UYCheatManager::YDebugProfanityWord(const FString& inWord) const {
}

void UYCheatManager::YDebugPrintStats(int32 serverData) const {
}

void UYCheatManager::YDebugPrintServerPerfDataToLog() const {
}

void UYCheatManager::YDebugPrintRelevancyLookup() const {
}

void UYCheatManager::YDebugPrintPlayerStates() const {
}

void UYCheatManager::YDebugPrintNetworkTime() {
}

void UYCheatManager::YDebugPrintMissionData() const {
}

void UYCheatManager::YDebugPrintInputInfo() const {
}

void UYCheatManager::YDebugPrintFlyingNavigationMemoryUsage() const {
}

void UYCheatManager::YDebugPrintCheckedAssetTypes() {
}

void UYCheatManager::YDebugPreviousSortingLayer() const {
}

void UYCheatManager::YDebugPlayAnnouncement(FName RowName, EYAnnouncementType announcementType) {
}

void UYCheatManager::YDebugOutputStateComponentDebugData() const {
}

void UYCheatManager::YDebugNotifyArrayIndex(int32 ArrayIndex) const {
}

void UYCheatManager::YDebugNextSortingLayer() const {
}

void UYCheatManager::YDebugMutelistRemoveEntry(const FString& PlayerId) {
}

void UYCheatManager::YDebugMutelistList() {
}

void UYCheatManager::YDebugMutelistAddEntry(const FString& PlayerId, bool muteChat, bool muteVoicechat) {
}

void UYCheatManager::YDebugModifyUserSkill(int32 skill, int32 deviation) const {
}

void UYCheatManager::YDebugMatchmakingSetUserNVR(int32 nvr) const {
}

void UYCheatManager::YDebugMatchmakingListUserInfoRequest() {
}

void UYCheatManager::YDebugMatchmakeToSessionId(const FString& SessionId) {
}

void UYCheatManager::YDebugMatchHasEnded() const {
}

void UYCheatManager::YDebugMakeChannelIDActiveVoice(int32 ChannelType) const {
}

void UYCheatManager::YDebugLogWeaponInfo() const {
}

void UYCheatManager::YDebugLogSessionInformation() const {
}

void UYCheatManager::YDebugLogPlayerVanity() const {
}

void UYCheatManager::YDebugLogPlayerStates() const {
}

void UYCheatManager::YDebugLogPlayerInitializationData() const {
}

void UYCheatManager::YDebugLogoutVivox(bool tryReconnect) const {
}

void UYCheatManager::YDebugLogin(const FString& Username, const FString& Password) const {
}

void UYCheatManager::YDebugLogAllFactionsProgress() const {
}

void UYCheatManager::YDebugListSquadInfo() const {
}

void UYCheatManager::YDebugListPersistentMatches() {
}

void UYCheatManager::YDebugListPendingFriendRequests() const {
}

void UYCheatManager::YDebugListMatchmakingSettings() const {
}

void UYCheatManager::YDebugListInteractingContainerInventory() const {
}

void UYCheatManager::YDebugListIngameInventory() const {
}

void UYCheatManager::YDebugListFriendsList() const {
}

void UYCheatManager::YDebugListFeatureToggles() const {
}

void UYCheatManager::YDebugListCachedStores() const {
}

void UYCheatManager::YDebugListCachedRotatingStores() const {
}

void UYCheatManager::YDebugListCachedPlatformEntitlements() {
}

void UYCheatManager::YDebugListCachedOnlineOffers() {
}

void UYCheatManager::YDebugListCachedNotifications() const {
}

void UYCheatManager::YDebugListCachedInboxMessages() {
}

void UYCheatManager::YDebugListCachedGrants() const {
}

void UYCheatManager::YDebugListAcceptedLegalAgreements() const {
}

void UYCheatManager::YDebugLightning(int32 lightningDebugLevel) const {
}

void UYCheatManager::YDebugLeaveStationInfo() const {
}

void UYCheatManager::YDebugLeaveSquad() const {
}

void UYCheatManager::YDebugKillAllCurrentAI() const {
}

void UYCheatManager::YDebugKickLocalUser(const FString& Reason) const {
}

void UYCheatManager::YDebugJoinSquad(const FString& squadId) const {
}

void UYCheatManager::YDebugInteractionTrace() {
}

void UYCheatManager::YDebugInitializationDebugState() const {
}

void UYCheatManager::YDebugIncreaseStat(const FString& statName, const FString& gameModeType, const int32& activityType, int32 incrementValue) const {
}

void UYCheatManager::YDebugImportFriendsFromCurrentPlatform() const {
}

void UYCheatManager::YDebugImmortalMode() const {
}

void UYCheatManager::YDebugHighlightItemStringId(const FString& ID, bool State) const {
}

void UYCheatManager::YDebugHighlightItemRowId(const FString& ID, bool State) const {
}

void UYCheatManager::YDebugHighlightAssociationItemType(int32 ItemType) const {
}

void UYCheatManager::YDebugGrantVanity(const FName& vanityId) const {
}

void UYCheatManager::YDebugGrantItem(const FName& ItemId) const {
}

void UYCheatManager::YDebugGrantAllVanity_Task(const FString& vanityType) const {
}

void UYCheatManager::YDebugGodMode() const {
}

void UYCheatManager::YDebugGiveSteamInventoryItem(const int32 itemDef, int32 Amount) {
}

void UYCheatManager::YDebugGivePlayerContractRewards(const FString& contractId) {
}

void UYCheatManager::YDebugGiveMod(FName RowName) const {
}

void UYCheatManager::YDebugGetStat(const FString& statName, const FString& gameModeType, const FString& activityType) const {
}

void UYCheatManager::YDebugGetAIStats() const {
}

void UYCheatManager::YDebugGenerateServerStationReport() const {
}

void UYCheatManager::YDebugFriendInviteUserID(const FString& UserId, bool immediateAccept) {
}

void UYCheatManager::YDebugForceTOCMigration(const FString& epicId) const {
}

void UYCheatManager::YDebugForceRepinging() const {
}

void UYCheatManager::YDebugForceRefreshContractsBoards() {
}

void UYCheatManager::YDebugForceInterruptionTravel() const {
}

void UYCheatManager::YDebugForceFriendListRefresh() const {
}

void UYCheatManager::YDebugForceFetchPlayFabStore(const FString& StoreId, const FString& CatalogVersion) const {
}

void UYCheatManager::YDebugForceFetchAllPlayFabStores() const {
}

void UYCheatManager::YDebugForceClientUpdate() const {
}

void UYCheatManager::YDebugExecuteAzureFunction(const FString& FunctionName) const {
}

void UYCheatManager::YDebugEscape() const {
}

void UYCheatManager::YDebugEnfOfMatchStats(int32 Placement, int32 playerResult, const FString& Mode) const {
}

void UYCheatManager::YDebugDumpSocialInformation() {
}

void UYCheatManager::YDebugDumpRegisteredWorldMarkerTargets() {
}

void UYCheatManager::YDebugDumpPingStats() const {
}

void UYCheatManager::YDebugDumpNPCInfo() const {
}

void UYCheatManager::YDebugDumpNetworkActors() const {
}

void UYCheatManager::YDebugDumpLatencyAnalytics() const {
}

void UYCheatManager::YDebugDumpInputState() {
}

void UYCheatManager::YDebugDumpInitializationData() const {
}

void UYCheatManager::YDebugDumpHighlightState() const {
}

void UYCheatManager::YDebugDumpDragState() const {
}

void UYCheatManager::YDebugDumpCustomizationData() const {
}

void UYCheatManager::YDebugDumpActiveWorldMarkers() {
}

void UYCheatManager::YDebugDumpAbilityAnalytics() const {
}

void UYCheatManager::YDebugDrawStatesDebug() {
}

void UYCheatManager::YDebugDisplayTrackedMessages() {
}

void UYCheatManager::YDebugDestroyFromClass(const FString& ClassName, int32 replicateServer) const {
}

void UYCheatManager::YDebugCreateChannel(const FString& channelId) const {
}

void UYCheatManager::YDebugCraftItemFromShopWithRarity(const FName& blueprintName, const FString& fromShop, int32 bpRarity) const {
}

void UYCheatManager::YDebugCraftItemAllShopsAllRarities(const FName& blueprintName) const {
}

void UYCheatManager::YDebugConnectionStarted() const {
}

void UYCheatManager::YDebugCompleteContract(const FString& contractId) {
}

void UYCheatManager::YDebugClearSpecificCompletedOneTimeContract(const FString& contractId) {
}

void UYCheatManager::YDebugClearPopupConfigEntries() const {
}

void UYCheatManager::YDebugClearLocalSquad() const {
}

void UYCheatManager::YDebugClearChannel(const FString& channelId) const {
}

void UYCheatManager::YDebugClearAllMissionLines() const {
}

void UYCheatManager::YDebugClearAllHighlighting() const {
}

void UYCheatManager::YDebugClearAllCompletedContracts() {
}

void UYCheatManager::YDebugChangeServerStationShardBackend(int32 shardIndex) const {
}

void UYCheatManager::YDebugChangeCountryCurrencySteam(const FString& CurrencyCode) {
}

void UYCheatManager::YDebugChangeBodyPart(const FString& ID, int32 Type, int32 colorVariation) const {
}

void UYCheatManager::YDebugBattleEyeSimpleCommand(const FString& Command) const {
}

void UYCheatManager::YDebugBattleEyePlayerActionComplex(const FString& PlayerId, int32 Type, int32 Min) const {
}

void UYCheatManager::YDebugBattleEyePlayerAction(const FString& PlayerId, int32 Type) const {
}

void UYCheatManager::YDebugBattleEyeComplexCommand(const FString& Command, const FString& Payload) const {
}

void UYCheatManager::YDebugBanLocalUser(const FString& Reason) const {
}

void UYCheatManager::YDebugAutomationData() const {
}

void UYCheatManager::YDebugAddVoipBattleLogEncounter() const {
}

void UYCheatManager::YDebugAddVanityIDAmount(const FString& vanityId, int32 Amount) const {
}

void UYCheatManager::YDebugAddUserToLocalSquad(const FString& PlayerId) const {
}

void UYCheatManager::YDebugAddTournamentUser() {
}

void UYCheatManager::YDebugAddRecentlyPlayed(const FString& UserId) const {
}

void UYCheatManager::YDebugAddPlayerImpulse(float Impulse) const {
}

void UYCheatManager::YDebugAddNotification(int32 Type, int32 messageType, bool isPermanent, const FString& Name, const FString& Message) const {
}

void UYCheatManager::YDebugAddInventoryCurrency(const FString& currencyName, int32 Amount) const {
}

void UYCheatManager::YDebugAddFactionProgress(const FString& factionId, int32 repIncrese) {
}

void UYCheatManager::YDebugAddDebugText(const FString& DebugText, int32 colorType) const {
}

void UYCheatManager::YDebugAddAllVanityOfType(int32 vanityType) const {
}

void UYCheatManager::YDebugActivateContractByRowName(const FString& contractId) {
}

void UYCheatManager::YDebugActionFriendInvites(bool accept) {
}

void UYCheatManager::YClearInventory() const {
}

void UYCheatManager::YActivitiesShowMinimapDebug(EYActivityType Type) const {
}

void UYCheatManager::YAcceptSquadInvite(const FString& inviteId) const {
}

void UYCheatManager::Volume(float NewVolume) {
}

void UYCheatManager::ToggleDebugMenu() const {
}

void UYCheatManager::Suicide(float Timer) {
}

void UYCheatManager::StartMatch() const {
}

void UYCheatManager::ShowMousePosition() {
}

void UYCheatManager::ShowItemsOfPlayer(FName UserId) const {
}

void UYCheatManager::ShowItems() const {
}

void UYCheatManager::ShowCraftingMaterialsOfPlayer(const FName& UserId) const {
}

void UYCheatManager::ShowCraftingMaterials() const {
}

void UYCheatManager::SetVolume(float NewVolume) {
}

void UYCheatManager::SetUnfocusedVolumeMultiplier(float NewVolume) {
}

void UYCheatManager::SetSelectedFaction(const FString& factionId) const {
}

void UYCheatManager::SetMatchTimer(int32 remainingSeconds) const {
}

void UYCheatManager::SetMaintainYFOV() const {
}

void UYCheatManager::SetMaintainXFOV() const {
}

void UYCheatManager::SetCraftingMaterialAmountOfPlayer(const FName& UserId, const FName& materialName, int32 Amount) const {
}

void UYCheatManager::SetCraftingMaterialAmount(const FName& materialName, int32 Amount) const {
}

void UYCheatManager::SetAllCraftingMaterialsAmountOfPlayer(const FName& UserId, int32 Amount) const {
}

void UYCheatManager::SetAllCraftingMaterialsAmount(int32 Amount) const {
}

void UYCheatManager::SendTestAnalyticsEvent() const {
}

void UYCheatManager::Revive() const {
}

void UYCheatManager::ResetSession(FName ServerId) const {
}

void UYCheatManager::ResetAllWaitingRooms() const {
}

void UYCheatManager::RequestFriendsList() const {
}

void UYCheatManager::RemoveItemFromPlayer(FName UserId, FName ItemId) const {
}

void UYCheatManager::RemoveItem(FName ItemId) const {
}

void UYCheatManager::RemoveAllItemsFromPlayer(FName UserId) const {
}

void UYCheatManager::RemoveAllItems() const {
}

void UYCheatManager::PrintDebugStringToScreen(UObject* WorldContextObject, const FString& debugString) {
}

void UYCheatManager::PrintAllDebugEvents() {
}

void UYCheatManager::MakeUIScreenshot(const FString& ScreenshotName, const FString& subfoldername) const {
}

void UYCheatManager::ListRooms() const {
}

void UYCheatManager::ListQueues() {
}

void UYCheatManager::HealSelf(float healAmount) {
}

void UYCheatManager::HangMe() {
}

void UYCheatManager::ForceStartMatch(const FString& GameMode, bool isRanked, const FString& Region) {
}

void UYCheatManager::FakeLoginResponse(int32 code) const {
}

void UYCheatManager::Execute() const {
}

void UYCheatManager::DebugSetForceShowPlayerMarkers(bool IsEnabled) const {
}

void UYCheatManager::DebugPickupActorsInRange(int32 Range) const {
}

void UYCheatManager::DebugMarkerForActorInRange(int32 Range) const {
}

void UYCheatManager::DBNO() {
}

void UYCheatManager::DamageSelf(float DamageAmount) {
}

void UYCheatManager::CrashMeNullptr() {
}

void UYCheatManager::BypassLoginScreen() const {
}

void UYCheatManager::BugReportTest() {
}

void UYCheatManager::BugReport(const FString& Title, const FString& Description) const {
}

void UYCheatManager::AddItemToPlayer(FName UserId, FName ItemId) const {
}

void UYCheatManager::AddItem(FName ItemId) const {
}


