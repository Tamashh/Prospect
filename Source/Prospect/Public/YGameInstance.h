#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YInterfaceBackendInstanceRetrival.h"
#include "YPlatformEntry.h"
#include "Engine/GameInstance.h"
#include "YInterfaceSignalRRetrievalInterface.h"
#include "YInterfaceAzureFunctionsRetrivalInterface.h"
#include "YInterfaceBattleEyeRetrivalInterface.h"
#include "YIInitializationRetrievalInterface.h"
#include "YPlatformUtilsRetrievalInterface.h"
#include "YInterfaceSocialCompatibilityInterface.h"
#include "S_ReplayInfo.h"
#include "YFeatureToggles.h"
#include "YGameInstance.generated.h"

class AActor;
class UMaterialParameterCollection;
class UWorld;
class UYAccountLinkingManager;
class UYActorPoolingManager;
class UYAnalytics;
class UYAudioManager;
class UYAudioVolumeManager;
class UYAuthorization;
class UYAuthorizationManager;
class UYAutomationManager;
class UYAzureFunctionsManager;
class UYBackendInstance;
class UYBattleEyeInstance;
class UYCharacterCustomizationManager;
class UYContractsManager;
class UYCraftingManager;
class UYDataTableManager;
class UYFactionsProgressionManager;
class UYFortunaPassManager;
class UYFriendsImportManager;
class UYGameInventoryManager;
class UYGamePingManager;
class UYGameSessionManager;
class UYGeneratorsManager;
class UYGenericNotificationsManager;
class UYGlobalAudio;
class UYGlobalVanityManager;
class UYGrantsManager;
class UYInitializationManager;
class UYInstanceSessionReconnectionManager;
class UYInsuranceManager;
class UYInterruptionManager;
class UYInventoryManager;
class UYItemSortingManager;
class UYKeybindingsManager;
class UYLegalAgreementsManager;
class UYManagerSessionResource;
class UYMarketingManager;
class UYMatchmakingManager;
class UYMessageManager;
class UYMissionManager;
class UYNewsManager;
class UYNotificationsManager;
class UYPlayerActionsManager;
class UYPlayerOnboardingManager;
class UYPlayerQuarterManager;
class UYPlayfabCommonRequestsManager;
class UYPopUpManager;
class UYQuestManager;
class UYShopManager;
class UYSignalRInstance;
class UYSocialCompatibilityManager;
class UYSocialManager;
class UYSquadManager;
class UYStaticCacheLookupManager;
class UYStatsManager;
class UYTOCVeteranManager;
class UYTwitchDropsManager;
class UYUiManager;
class UYUserDataManager;
class UYVictimCompensationManager;
class UYVivoxIssueRequestManager;
class UYVivoxManager;
class UYWeaponResources;
class UYWidgetPoolManager;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class UYGameInstance : public UGameInstance, public IYInterfaceBackendInstanceRetrival, public IYInterfaceSocialCompatibilityInterface, public IYInterfaceAzureFunctionsRetrivalInterface, public IYInterfaceSignalRRetrievalInterface, public IYPlatformUtilsRetrievalInterface, public IYIInitializationRetrievalInterface, public IYInterfaceBattleEyeRetrivalInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnNewLoadtimesData);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGlobalAudio* m_globalAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isMockWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAudioManager* m_audioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAudioVolumeManager* m_audioVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWeaponResources* m_weaponResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYSquadManager* m_squadManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYStatsManager* m_statsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYSignalRInstance* m_signalrInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYBackendInstance* m_backendInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYSocialCompatibilityManager* m_socialCompatabilityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGameInventoryManager* m_gameInventoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYContractsManager* m_contractsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYFactionsProgressionManager* m_factionsProgressionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYInstanceSessionReconnectionManager* m_sessionReconnectionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYManagerSessionResource* m_resourceSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayerQuarterManager* m_playerQuarterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMissionManager* m_missionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGeneratorsManager* m_passiveGeneratorsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYUserDataManager* m_userDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYInitializationManager* m_initializationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMarketingManager* m_marketingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMatchmakingManager* m_matchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAzureFunctionsManager* m_azureFunctionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayfabCommonRequestsManager* m_commonFunctionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYStaticCacheLookupManager* m_staticItemLookupManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYQuestManager* m_questManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGrantsManager* m_grantsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNotificationsManager* m_notificationsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGameSessionManager* m_gameSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCharacterCustomizationManager* m_characterCustomizationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGlobalVanityManager* m_globalVanityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYKeybindingsManager* m_keybindingsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYUiManager* m_uiManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGenericNotificationsManager* m_genericNotificationsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYItemSortingManager* m_itemSortingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayerActionsManager* m_playerActionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYFortunaPassManager* m_fortunaPassManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNewsManager* m_newsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYTwitchDropsManager* m_twitchDropsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYTOCVeteranManager* m_TOCVeteranManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYVictimCompensationManager* m_victimCompensationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_prevMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* YCrasher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYActorPoolingManager* m_actorPoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAuthorization* m_authorization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnNewLoadtimesData OnNewLoadTimesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYVivoxManager* m_vivoxManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYVivoxIssueRequestManager* m_vivoxIssueManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGamePingManager* m_pingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayerOnboardingManager* m_onboardingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYInventoryManager* m_inventoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCraftingManager* m_craftingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAutomationManager* m_automationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYBattleEyeInstance* m_battleEyeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYInterruptionManager* m_interruptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_globalMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> m_globalMaterialParameterCollectionPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAnalytics* m_gameAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_startRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableRankedFeature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_returningToStation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYDataTableManager* m_dataTableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWidgetPoolManager* m_widgetPoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMessageManager* m_messageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPopUpManager* m_popUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYShopManager* m_shopManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYSocialManager* m_socialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYInsuranceManager* m_insuranceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAuthorizationManager* m_authorizationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAccountLinkingManager* m_accountLinkingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYFriendsImportManager* m_friendsImportManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYLegalAgreementsManager* m_legalAgreementsManager;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_chatLogSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_logSendInterval;
    
public:
    UYGameInstance();

    UFUNCTION(BlueprintCallable)
    void StopRecordingReplayFromBP();
    
    UFUNCTION(BlueprintCallable)
    void StartRecordingReplayFromBP(const FString& ReplayName, const FString& FriendlyName);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalAudio(UYGlobalAudio* globalAudioFile);
    
    UFUNCTION(BlueprintCallable)
    static void RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName);
    
    UFUNCTION(BlueprintCallable)
    void PlayReplayFromBP(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsApplied();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSendLog();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestSocialProfile(const TArray<FYPlatformEntry>& entry, int32 requestHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnProfanityListRecieved(const TArray<FString>& list, const TArray<FString>& regexProfanityList) const;
    
    UFUNCTION(BlueprintCallable)
    void OnLogin(EYLoginResult loginResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesReceived(const FYFeatureToggles& featureToggles);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesFetchedCallback(const FYFeatureToggles& featureToggles);
    
    UFUNCTION(BlueprintCallable)
    void OnAuthorizationStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAuthorizationComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYAuthorization* GetAuthorization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindReplays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeleteReplay(const FString& ReplayName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInit(UWorld* World);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFindReplaysComplete(const TArray<FS_ReplayInfo>& AllReplays);
    

    // Fix for true pure virtual functions not being implemented
};

