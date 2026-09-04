#include "YPlayerController.h"
#include "YCheatManager.h"
#include "YControllerInventoryBackendComponent.h"
#include "YControllerInventoryInsuranceComponent.h"
#include "YControllerInventoryRuntimeComponent.h"
#include "YControllerNewsComponent.h"
#include "YControllerPlayerMapMarkerComponent.h"
#include "YControllerPlayerQuarterComponent.h"
#include "YControllerQuestComponent.h"
#include "YControllerReleaseNotesComponent.h"
#include "YControllerStateInputComponent.h"
#include "YControllerTravelComponent.h"
#include "YControllerVictimCompensationComponent.h"
#include "YPlayerFactionsProgressionComponent.h"
#include "YPlayerInitializationComponent.h"
#include "YPlayerPassiveGeneratorsComponent.h"
#include "YVivoxComponent.h"

AYPlayerController::AYPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shouldNeverUpdateNavigationTransform = true;
    this->CheatClass = UYCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->m_genericInputComponent = NULL;
    this->m_mapmarkerComponent = CreateDefaultSubobject<UYControllerPlayerMapMarkerComponent>(TEXT("ControllerPlayerMapMarkerComponent"));
    this->m_parentController = NULL;
    this->m_vivoxComponent = CreateDefaultSubobject<UYVivoxComponent>(TEXT("YVivoxComponent"));
    this->m_initializationComponent = CreateDefaultSubobject<UYPlayerInitializationComponent>(TEXT("PlayerInitializationComponent"));
    this->m_controllerInventoryBackendComponent = CreateDefaultSubobject<UYControllerInventoryBackendComponent>(TEXT("ControllerInventoryBackendComponent"));
    this->m_inputControllerComponent = CreateDefaultSubobject<UYControllerStateInputComponent>(TEXT("PlayerInputStateComponent"));
    this->m_questComponent = CreateDefaultSubobject<UYControllerQuestComponent>(TEXT("ControllerQuestComponent"));
    this->m_playerQuarterComponent = CreateDefaultSubobject<UYControllerPlayerQuarterComponent>(TEXT("playerQuarterComponent"));
    this->m_playerPassiveGeneratorsComponent = CreateDefaultSubobject<UYPlayerPassiveGeneratorsComponent>(TEXT("PlayerPassiveGeneratorsComponent"));
    this->m_controllerInventoryRuntimeComponent = CreateDefaultSubobject<UYControllerInventoryRuntimeComponent>(TEXT("ControllerInventoryRuntimeComponent"));
    this->m_controllerInventoryInsuranceComponent = CreateDefaultSubobject<UYControllerInventoryInsuranceComponent>(TEXT("ControllerInventoryInsuranceComponent"));
    this->m_controllerVictimCompensationComponent = CreateDefaultSubobject<UYControllerVictimCompensationComponent>(TEXT("ControllerVictimCompensationComponent"));
    this->m_playerFactionsProgressionComponent = CreateDefaultSubobject<UYPlayerFactionsProgressionComponent>(TEXT("PlayerFactionsProgressionComponent"));
    this->m_preMatchInput = NULL;
    this->m_inMatchInput = NULL;
    this->m_endOfMatchInput = NULL;
    this->m_uiInput = NULL;
    this->m_releaseNoteComponent = CreateDefaultSubobject<UYControllerReleaseNotesComponent>(TEXT("ReleaseNoteComponent"));
    this->m_analogCursorAcceleration = 1500.0f;
    this->m_analogCursorMaxSpeed = 2000.0f;
    this->m_analogCursorStickySlowdown = 0.75f;
    this->m_bugreporterOpen = false;
    this->m_travelComponent = CreateDefaultSubobject<UYControllerTravelComponent>(TEXT("TravlelComponent"));
    this->m_newsComponent = CreateDefaultSubobject<UYControllerNewsComponent>(TEXT("NewsComponent"));
    this->m_cheatSimComponent = NULL;
    this->m_shouldStashBeHighlightedForDragAndDrop = true;
    this->m_shouldBackpackBeHighlightedForDragAndDrop = true;
    this->m_shouldSafePocketsBeHighlightedForDragAndDrop = true;
}

void AYPlayerController::SyncServerTime() {
}

void AYPlayerController::SimulateInputAxis(FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad) {
}

void AYPlayerController::SimulateInput(EYInputActionName inputActionName, TEnumAsByte<EInputEvent> inputType) {
}

void AYPlayerController::ServerSendConsoleCommand_Implementation(const FString& Command) {
}
bool AYPlayerController::ServerSendConsoleCommand_Validate(const FString& Command) {
    return true;
}

void AYPlayerController::ServerRequestServerTime_Implementation(APlayerController* requester, float requestWorldTime) {
}
bool AYPlayerController::ServerRequestServerTime_Validate(APlayerController* requester, float requestWorldTime) {
    return true;
}

void AYPlayerController::ServerCreateDebugComponent_Implementation() {
}
bool AYPlayerController::ServerCreateDebugComponent_Validate() {
    return true;
}

void AYPlayerController::ServerCrashMe_Implementation(float Timer, const FString& Msg) const {
}
bool AYPlayerController::ServerCrashMe_Validate(float Timer, const FString& Msg) {
    return true;
}

void AYPlayerController::ServerCommand(const FString& Command) {
}

void AYPlayerController::SendAnnouncement(const FString& announcement) {
}

void AYPlayerController::SC(const FString& Command) {
}

void AYPlayerController::ReconnectMe() {
}

void AYPlayerController::OnToggleDebugWidget() {
}

void AYPlayerController::OnToggleBugReporter() {
}

void AYPlayerController::OnFrontendCheatDetectionSettingsUpdated() {
}

void AYPlayerController::OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles) {
}

void AYPlayerController::OnBugreportDataSaved() {
}

void AYPlayerController::OnBugreportDataRequest() {
}

AYPlayerCharacter* AYPlayerController::GetYPlayerCharacter() {
    return NULL;
}

AYHUD* AYPlayerController::GetYHUD() {
    return NULL;
}

bool AYPlayerController::GetIsChatEnabled() {
    return false;
}

void AYPlayerController::FlushPressedActionKeys(EYInputActionName inputAction) {
}

void AYPlayerController::FlushAllPressedKeys() {
}

void AYPlayerController::EnterMatch() {
}

void AYPlayerController::DeactivateInputForUMG(const FString& contextString, UWidget* WidgetToFocus) {
}

void AYPlayerController::CrashServer(float Timer, const FString& Msg) const {
}

void AYPlayerController::CrashMe(float Timer, const FString& Msg) const {
}

void AYPlayerController::ClientReportServerTime_Implementation(float requestWorldTime, float serverTime) {
}

void AYPlayerController::ClientCommand_Implementation(const FString& Command) {
}

void AYPlayerController::Client_OnItemAddedToInventory_Implementation(const FYInventoryItem& Item) {
}


void AYPlayerController::AddComponentToHiddenPrimitiveComponents(UPrimitiveComponent* componenetToHide) {
}

void AYPlayerController::ActivateInputForUMG_BP(UWidget* WidgetToFocus, bool showCursor, bool uiOnly, bool hideCursorDuringCapture, EYInputUIStackType stackType) {
}


