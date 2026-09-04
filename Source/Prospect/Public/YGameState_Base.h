#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameStateBase.h"
#include "YGameState_Base.generated.h"

class AYPlayersMapDataManager;
class UYGameStateCustomizationComponent;
class UYInventoryComponentManager;
class UYPerformanceResourceManagerComponent;
class UYPlayerEOSStatsDataComponent;
class UYPlayersStatsComponent;
class UYSceneManager;
class UYVideoSettingsAnalyticsComponent;

UCLASS(Blueprintable)
class AYGameState_Base : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BattleServerId, meta=(AllowPrivateAccess=true))
    FString m_battleServerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BattleServerBeginnerFlag, meta=(AllowPrivateAccess=true))
    bool m_battleServerBeginnerFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BattleServerAllowBIEvents, meta=(AllowPrivateAccess=true))
    bool m_battleServerAllowBIEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_gameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useBackendGearset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowsDroppingMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useShutdownLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showLoadingOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_blockedVoicelineCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AYPlayersMapDataManager* m_playersMapDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_haveMinimapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_travelPostAuthorization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_introDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_gameModeTuningHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_performanceHandleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYSceneManager* m_sceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerEOSStatsDataComponent* m_playerEosStatsDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayersStatsComponent* m_playersStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameStateCustomizationComponent* m_customizationStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPerformanceResourceManagerComponent* m_resourceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYInventoryComponentManager* m_inventoryComponentsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYVideoSettingsAnalyticsComponent* m_videoSettingsAnalyticsComponent;
    
    AYGameState_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_BattleServerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BattleServerBeginnerFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BattleServerAllowBIEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGameModeTuning();
    
};

