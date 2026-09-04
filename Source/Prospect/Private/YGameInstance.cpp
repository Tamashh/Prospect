#include "YGameInstance.h"
#include "YAzureFunctionsManager.h"
#include "YPlayfabCommonRequestsManager.h"
#include "YInitializationManager.h"
#include "YAccountLinkingManager.h"
#include "YFriendsImportManager.h"
#include "YLegalAgreementsManager.h"
#include "YSocialCompatibilityManager.h"
#include "YAudioVolumeManager.h"
#include "YAuthorizationManager.h"
#include "YAutomationManager.h"
#include "YCharacterCustomizationManager.h"
#include "YContractsManager.h"
#include "YCraftingManager.h"
#include "YDataTableManager.h"
#include "YFactionsProgressionManager.h"
#include "YFortunaPassManager.h"
#include "YGameInventoryManager.h"
#include "YGamePingManager.h"
#include "YGameSessionManager.h"
#include "YGeneratorsManager.h"
#include "YGenericNotificationsManager.h"
#include "YGlobalVanityManager.h"
#include "YGrantsManager.h"
#include "YInstanceSessionReconnectionManager.h"
#include "YInsuranceManager.h"
#include "YInterruptionManager.h"
#include "YInventoryManager.h"
#include "YItemSortingManager.h"
#include "YKeybindingsManager.h"
#include "YManagerSessionResource.h"
#include "YMarketingManager.h"
#include "YMatchmakingManager.h"
#include "YMessageManager.h"
#include "YMissionManager.h"
#include "YNewsManager.h"
#include "YNotificationsManager.h"
#include "YPlayerActionsManager.h"
#include "YPlayerOnboardingManager.h"
#include "YPlayerQuarterManager.h"
#include "YPopUpManager.h"
#include "YQuestManager.h"
#include "YShopManager.h"
#include "YSocialManager.h"
#include "YSquadManager.h"
#include "YStaticCacheLookupManager.h"
#include "YStatsManager.h"
#include "YTOCVeteranManager.h"
#include "YTwitchDropsManager.h"
#include "YUiManager.h"
#include "YUserDataManager.h"
#include "YVictimCompensationManager.h"
#include "YVivoxIssueRequestManager.h"
#include "YVivoxManager.h"
#include "YWeaponResources.h"
#include "YWidgetPoolManager.h"

UYGameInstance::UYGameInstance() {
    this->m_globalAudio = NULL;
    this->m_isMockWorld = false;
    this->m_audioManager = NULL;
    this->m_audioVolumeManager = CreateDefaultSubobject<UYAudioVolumeManager>(TEXT("YAudioVolumeManager"));
    this->m_weaponResources = CreateDefaultSubobject<UYWeaponResources>(TEXT("YWeaponResources"));
    this->m_squadManager = CreateDefaultSubobject<UYSquadManager>(TEXT("YSquadManager"));
    this->m_statsManager = CreateDefaultSubobject<UYStatsManager>(TEXT("YStatsManager"));
    this->m_signalrInstance = NULL;
    this->m_backendInstance = NULL;
    this->m_socialCompatabilityManager = CreateDefaultSubobject<UYSocialCompatibilityManager>(TEXT("SocialCompatabilityManager"));
    this->m_gameInventoryManager = CreateDefaultSubobject<UYGameInventoryManager>(TEXT("YGameInventoryManager"));
    this->m_contractsManager = CreateDefaultSubobject<UYContractsManager>(TEXT("YContractsManager"));
    this->m_factionsProgressionManager = CreateDefaultSubobject<UYFactionsProgressionManager>(TEXT("YFactionsProgressionManager"));
    this->m_sessionReconnectionManager = CreateDefaultSubobject<UYInstanceSessionReconnectionManager>(TEXT("SessionReconnectionManager"));
    this->m_resourceSessionManager = CreateDefaultSubobject<UYManagerSessionResource>(TEXT("ResourceSessionManager"));
    this->m_playerQuarterManager = CreateDefaultSubobject<UYPlayerQuarterManager>(TEXT("PlayerQuarterManager"));
    this->m_missionManager = CreateDefaultSubobject<UYMissionManager>(TEXT("MissionManager"));
    this->m_passiveGeneratorsManager = CreateDefaultSubobject<UYGeneratorsManager>(TEXT("PassiveGeneratorsManager"));
    this->m_userDataManager = CreateDefaultSubobject<UYUserDataManager>(TEXT("UserDataManager"));
    this->m_initializationManager = CreateDefaultSubobject<UYInitializationManager>(TEXT("InitializationManager"));
    this->m_marketingManager = CreateDefaultSubobject<UYMarketingManager>(TEXT("YMarketingManager"));
    this->m_matchmakingManager = CreateDefaultSubobject<UYMatchmakingManager>(TEXT("MatchmakingManager"));
    this->m_azureFunctionsManager = CreateDefaultSubobject<UYAzureFunctionsManager>(TEXT("AzureFunctionsManager"));
    this->m_commonFunctionsManager = CreateDefaultSubobject<UYPlayfabCommonRequestsManager>(TEXT("PlayfabCommonRequestManager"));
    this->m_staticItemLookupManager = CreateDefaultSubobject<UYStaticCacheLookupManager>(TEXT("StaticItemLookupManager"));
    this->m_questManager = CreateDefaultSubobject<UYQuestManager>(TEXT("QuestManager"));
    this->m_grantsManager = CreateDefaultSubobject<UYGrantsManager>(TEXT("YGrantsManager"));
    this->m_notificationsManager = CreateDefaultSubobject<UYNotificationsManager>(TEXT("YNotificationsManager"));
    this->m_gameSessionManager = CreateDefaultSubobject<UYGameSessionManager>(TEXT("YGameSessionManager"));
    this->m_characterCustomizationManager = CreateDefaultSubobject<UYCharacterCustomizationManager>(TEXT("CharacterCustomizationManager"));
    this->m_globalVanityManager = CreateDefaultSubobject<UYGlobalVanityManager>(TEXT("GlobalVanityManager"));
    this->m_keybindingsManager = CreateDefaultSubobject<UYKeybindingsManager>(TEXT("KeybindingsManager"));
    this->m_uiManager = CreateDefaultSubobject<UYUiManager>(TEXT("UiManager"));
    this->m_genericNotificationsManager = CreateDefaultSubobject<UYGenericNotificationsManager>(TEXT("GenericNotificationsManager"));
    this->m_itemSortingManager = CreateDefaultSubobject<UYItemSortingManager>(TEXT("YItemSortingManager"));
    this->m_playerActionsManager = CreateDefaultSubobject<UYPlayerActionsManager>(TEXT("YPlayerActionsManager"));
    this->m_fortunaPassManager = CreateDefaultSubobject<UYFortunaPassManager>(TEXT("YFortunaPassManager"));
    this->m_newsManager = CreateDefaultSubobject<UYNewsManager>(TEXT("NewsManager"));
    this->m_twitchDropsManager = CreateDefaultSubobject<UYTwitchDropsManager>(TEXT("YTwitchDropsManager"));
    this->m_TOCVeteranManager = CreateDefaultSubobject<UYTOCVeteranManager>(TEXT("YTOCVeteranManager"));
    this->m_victimCompensationManager = CreateDefaultSubobject<UYVictimCompensationManager>(TEXT("YVictimCompensationManager"));
    this->YCrasher = NULL;
    this->m_actorPoolManager = NULL;
    this->m_authorization = NULL;
    this->m_vivoxManager = CreateDefaultSubobject<UYVivoxManager>(TEXT("YVivoxManager"));
    this->m_vivoxIssueManager = CreateDefaultSubobject<UYVivoxIssueRequestManager>(TEXT("YVivoxIssueManager"));
    this->m_pingManager = CreateDefaultSubobject<UYGamePingManager>(TEXT("GamePingManager"));
    this->m_onboardingManager = CreateDefaultSubobject<UYPlayerOnboardingManager>(TEXT("PlayerOnboardingManager"));
    this->m_inventoryManager = CreateDefaultSubobject<UYInventoryManager>(TEXT("Inventorymanager"));
    this->m_craftingManager = CreateDefaultSubobject<UYCraftingManager>(TEXT("YCraftingManager"));
    this->m_automationManager = CreateDefaultSubobject<UYAutomationManager>(TEXT("AutomationManager"));
    this->m_battleEyeInstance = NULL;
    this->m_interruptionManager = CreateDefaultSubobject<UYInterruptionManager>(TEXT("YInterruptionManager"));
    this->m_globalMaterialParameterCollection = NULL;
    this->m_gameAnalytics = NULL;
    this->m_startRank = 300;
    this->m_disableRankedFeature = false;
    this->m_returningToStation = false;
    this->m_dataTableManager = CreateDefaultSubobject<UYDataTableManager>(TEXT("YDataTableManager"));
    this->m_widgetPoolManager = CreateDefaultSubobject<UYWidgetPoolManager>(TEXT("YWidgetPoolManager"));
    this->m_messageManager = CreateDefaultSubobject<UYMessageManager>(TEXT("YMesseageManager"));
    this->m_popUpManager = CreateDefaultSubobject<UYPopUpManager>(TEXT("YPopUpManager"));
    this->m_shopManager = CreateDefaultSubobject<UYShopManager>(TEXT("YShopManager"));
    this->m_socialManager = CreateDefaultSubobject<UYSocialManager>(TEXT("YSocialManager"));
    this->m_insuranceManager = CreateDefaultSubobject<UYInsuranceManager>(TEXT("YInsuranceManager"));
    this->m_authorizationManager = CreateDefaultSubobject<UYAuthorizationManager>(TEXT("YAuthorizationManager"));
    this->m_accountLinkingManager = CreateDefaultSubobject<UYAccountLinkingManager>(TEXT("YAccountLinkingManager"));
    this->m_friendsImportManager = CreateDefaultSubobject<UYFriendsImportManager>(TEXT("YFriendsImportManager"));
    this->m_legalAgreementsManager = CreateDefaultSubobject<UYLegalAgreementsManager>(TEXT("YLegalAgreementsManager"));
    this->m_chatLogSize = 30;
    this->m_logSendInterval = 720.0f;
}

void UYGameInstance::StopRecordingReplayFromBP() {
}

void UYGameInstance::StartRecordingReplayFromBP(const FString& ReplayName, const FString& FriendlyName) {
}

void UYGameInstance::SetGlobalAudio(UYGlobalAudio* globalAudioFile) {
}

void UYGameInstance::RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName) {
}

void UYGameInstance::PlayReplayFromBP(const FString& ReplayName) {
}

void UYGameInstance::OnSettingsApplied() {
}

void UYGameInstance::OnSendLog() {
}

void UYGameInstance::OnRequestSocialProfile(const TArray<FYPlatformEntry>& entry, int32 requestHandle) {
}

void UYGameInstance::OnProfanityListRecieved(const TArray<FString>& list, const TArray<FString>& regexProfanityList) const {
}

void UYGameInstance::OnLogin(EYLoginResult loginResult) {
}

void UYGameInstance::OnFeatureTogglesReceived(const FYFeatureToggles& featureToggles) {
}

void UYGameInstance::OnFeatureTogglesFetchedCallback(const FYFeatureToggles& featureToggles) {
}

void UYGameInstance::OnAuthorizationStateChanged() {
}

void UYGameInstance::OnAuthorizationComplete() {
}

UYAuthorization* UYGameInstance::GetAuthorization() const {
    return NULL;
}

void UYGameInstance::FindReplays() const {
}

void UYGameInstance::DeleteReplay(const FString& ReplayName) const {
}





