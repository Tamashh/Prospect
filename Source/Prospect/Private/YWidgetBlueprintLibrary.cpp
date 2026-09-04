#include "YWidgetBlueprintLibrary.h"

UYWidgetBlueprintLibrary::UYWidgetBlueprintLibrary() {
}

bool UYWidgetBlueprintLibrary::YProjectWorldToScreenUsingSkeletalMeshFov(const UObject* WorldContextObject, const FVector& WorldPosition, const UYSkeletalMeshComponentFOV* skelMeshFov, FVector2D& screenPosition, bool bPlayerViewportRelative) {
    return false;
}

bool UYWidgetBlueprintLibrary::YProjectWorldToScreenUsingFov(const UObject* WorldContextObject, const FVector& WorldPosition, float customFov, FVector2D& screenPosition, bool bPlayerViewportRelative) {
    return false;
}

bool UYWidgetBlueprintLibrary::YProjectWorldToScreen(UObject* WorldContextObject, const FVector& WorldPosition, FVector2D& screenPosition, bool bPlayerViewportRelative, const FVector2D leftAndUpperEdge, const FVector2D rightAndLowerEdge) {
    return false;
}

void UYWidgetBlueprintLibrary::UnbindFromOKAndCancelModal(UObject* objectContext) {
}

void UYWidgetBlueprintLibrary::SynchronizeWidgetProperties(UWidget* Widget) {
}

bool UYWidgetBlueprintLibrary::SwitchWidgetIndexWidget(UWidgetSwitcher* WidgetSwitcher, UWidget* desiredWidget) {
    return false;
}

void UYWidgetBlueprintLibrary::SwitchWidgetIndexInteger(UWidgetSwitcher* WidgetSwitcher, int32 Index) {
}

void UYWidgetBlueprintLibrary::SwitchVisibilityCondensed(const ESlateVisibility InVisibility, EYVisibilityBranch& branches, bool& IsVisible) {
}

void UYWidgetBlueprintLibrary::ShowToastMessage(const FText primaryText, const FText secondaryText, bool successful) {
}

UYWidget_ConfirmationModal* UYWidgetBlueprintLibrary::RequestOKAndCancelModal(const FText& headline, const FText& Message, const FText okButtonText, const FText cancelButtonText, const FText warningMessage) {
    return NULL;
}

bool UYWidgetBlueprintLibrary::ProjectToScreenPeriphery(const AActor* OtherActor, FVector2D& outProjectedPosition, float& outAngleInDegrees, const float offsetPercent) {
    return false;
}

void UYWidgetBlueprintLibrary::OpenFeedbackSurvey(UObject* objectContext) {
}

FText UYWidgetBlueprintLibrary::LoginResultToText(EYLoginResult loginResult) {
    return FText::GetEmpty();
}

UYWidget_ConfirmationModal* UYWidgetBlueprintLibrary::GetDialogOKAndCancelModal() {
    return NULL;
}

FText UYWidgetBlueprintLibrary::FormatTextWithParams(const FText& Text, const TMap<FString, FString>& textParams, const TMap<FString, FString>& localizedParams, FName stringTableName) {
    return FText::GetEmpty();
}

FText UYWidgetBlueprintLibrary::ConvertTimeToDisplayText(int32 Time) {
    return FText::GetEmpty();
}

FString UYWidgetBlueprintLibrary::ConstructLocationNameForBI(const UYWidget* widgetObject) {
    return TEXT("");
}


