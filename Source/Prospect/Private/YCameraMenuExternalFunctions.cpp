#include "YCameraMenuExternalFunctions.h"

UYCameraMenuExternalFunctions::UYCameraMenuExternalFunctions() {
}

void UYCameraMenuExternalFunctions::StartCameraTransitionToWeapon(UObject* WorldContextObject) {
}

void UYCameraMenuExternalFunctions::StartCameraTransitionTo(UObject* WorldContextObject) {
}

bool UYCameraMenuExternalFunctions::SetCameraForWeapon(AActor* contextActor, const FName& vanityId, const FName& weaponId, FDataTableRowHandle& outVanityRowHandle, const FString& callerContext) {
    return false;
}

bool UYCameraMenuExternalFunctions::SetActiveCustomizationDataForItem(AActor* contextActor, const FName& entityToVisualizeId, const FString& callerContext, EYVanityType vanityType, bool modifyItemBasedOnEquippedItem) {
    return false;
}

void UYCameraMenuExternalFunctions::ResetCameraToEmpty(const AActor* contextActor) {
}

void UYCameraMenuExternalFunctions::ResetCameraForWeapon(AActor* contextActor, const FName& weaponId, const FString& callerContext) {
}


