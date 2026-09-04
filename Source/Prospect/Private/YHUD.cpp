#include "YHUD.h"
#include "Templates/SubclassOf.h"
#include "YProgressDisplayComponent.h"
#include "YWidgetUpdater.h"

AYHUD::AYHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->DebugDisplay.AddDefaulted(1);
    this->m_loadingIndicatorWBPClass = NULL;
    this->m_progressDisplayComponent = CreateDefaultSubobject<UYProgressDisplayComponent>(TEXT("YProgressDisplayComponent"));
    this->m_widgetUpdater = CreateDefaultSubobject<UYWidgetUpdater>(TEXT("UpdateWidget"));
    this->m_screenSystemRoot = NULL;
    this->m_startScreenClass = NULL;
    this->m_escStateClass = NULL;
    this->m_mainContainerClass = NULL;
    this->m_levelActorContainerClass = NULL;
    this->m_dialogContainerClass = NULL;
    this->m_loadingIndicator = NULL;
    this->m_mainContainer = NULL;
}

void AYHUD::UnregisterWidgetProvider(UYWidgetProvider* provider) {
}

void AYHUD::ToggleHud() {
}

void AYHUD::ToggleEscMenuNow(bool forced) {
}

void AYHUD::ToggleEscMenu() {
}

void AYHUD::ToggleChatInput() {
}

UYWidgetProvider* AYHUD::RequestWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass, const FString& callerContext) {
    return NULL;
}

void AYHUD::RequestNotification(const FText& notificationText, FVector colorOverride, float Duration, EYNotificationType notificationType, EYNotificationPlacement notificationImportance) {
}

void AYHUD::RemoveFilterForMapMarkerType(AActor* actorContext, EYMapMarkerType typeToFilter) {
}

void AYHUD::ReleaseWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass) {
}

void AYHUD::OnInteractionUpdated_Implementation(const FYInteractionUpdateData& interactionData) {
}

void AYHUD::OnInteractionDetected_Implementation(const FYPlayerInteraction& interactionData, bool detected) {
}

bool AYHUD::IsHUDVisible() {
    return false;
}

TArray<EYMapMarkerType> AYHUD::GetActiveMarkerFilters() {
    return TArray<EYMapMarkerType>();
}


void AYHUD::AddFilterForMapMarkerType(AActor* actorContext, EYMapMarkerType typeToFilter) {
}

void AYHUD::ActivateInputForUmg(UYWidget* focusedWidget, const FString& contextString, bool isActivated, bool uiOnly) {
}


