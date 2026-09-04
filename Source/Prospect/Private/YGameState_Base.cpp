#include "YGameState_Base.h"
#include "Net/UnrealNetwork.h"
#include "YGameStateCustomizationComponent.h"
#include "YInventoryComponentManager.h"
#include "YPerformanceResourceManagerComponent.h"
#include "YPlayerEOSStatsDataComponent.h"
#include "YPlayersStatsComponent.h"
#include "YSceneManager.h"
#include "YVideoSettingsAnalyticsComponent.h"

AYGameState_Base::AYGameState_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_battleServerBeginnerFlag = false;
    this->m_battleServerAllowBIEvents = true;
    this->m_useBackendGearset = true;
    this->m_allowsDroppingMoney = true;
    this->m_useShutdownLogic = true;
    this->m_showLoadingOverlay = true;
    this->m_playersMapDataManager = NULL;
    this->m_haveMinimapManager = false;
    this->m_travelPostAuthorization = false;
    this->m_introDuration = 16.5f;
    this->m_sceneManager = CreateDefaultSubobject<UYSceneManager>(TEXT("YSceneManager"));
    this->m_playerEosStatsDataComponent = CreateDefaultSubobject<UYPlayerEOSStatsDataComponent>(TEXT("YPlayerEOSStatsDataComponent"));
    this->m_playersStatsComponent = CreateDefaultSubobject<UYPlayersStatsComponent>(TEXT("YPlayersStatsComponent"));
    this->m_customizationStateComponent = CreateDefaultSubobject<UYGameStateCustomizationComponent>(TEXT("GameStateCustomizationComponent"));
    this->m_resourceManagerComponent = CreateDefaultSubobject<UYPerformanceResourceManagerComponent>(TEXT("resourceComponent"));
    this->m_inventoryComponentsManager = CreateDefaultSubobject<UYInventoryComponentManager>(TEXT("InventoryComponentsManager"));
    this->m_videoSettingsAnalyticsComponent = CreateDefaultSubobject<UYVideoSettingsAnalyticsComponent>(TEXT("YVideoSettingsAnalyticsComponent"));
}

void AYGameState_Base::OnRep_BattleServerId() {
}

void AYGameState_Base::OnRep_BattleServerBeginnerFlag() {
}

void AYGameState_Base::OnRep_BattleServerAllowBIEvents() {
}

void AYGameState_Base::InitializeGameModeTuning_Implementation() {
}

void AYGameState_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYGameState_Base, m_battleServerId);
    DOREPLIFETIME(AYGameState_Base, m_battleServerBeginnerFlag);
    DOREPLIFETIME(AYGameState_Base, m_battleServerAllowBIEvents);
    DOREPLIFETIME(AYGameState_Base, m_playersMapDataManager);
}


