#include "YGameplayPlayerExternalFunctions.h"

UYGameplayPlayerExternalFunctions::UYGameplayPlayerExternalFunctions() {
}

bool UYGameplayPlayerExternalFunctions::IsXPEnabled() {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsThirdPersonOnlyViewStateEnabled(AActor* actorContext) {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsPlayFirstPersonComseticEffects(AActor* actorContext) {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsOfflineGearStoreEnabled(UObject* relevantObject) {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsNewRecoilCompensationEnabled() {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsInfiniteMatchLobbyEnabled() {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsFullScreenWidgetRuntimeDisabled(AActor* actorContext) {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsCodeDrivenHighlightingEnabled() {
    return false;
}

bool UYGameplayPlayerExternalFunctions::IsBannerFeatureEnabled() {
    return false;
}

FString UYGameplayPlayerExternalFunctions::FindUIDFromActor(AActor* relevantActor) {
    return TEXT("");
}

float UYGameplayPlayerExternalFunctions::FindTimeSinceLastExecutedSpawningInitialized(AActor* relevantContext) {
    return 0.0f;
}

FName UYGameplayPlayerExternalFunctions::FindThirdPersonWeaponMeshSocketName(AActor* relevantContext) {
    return NAME_None;
}

FName UYGameplayPlayerExternalFunctions::FindSelectedFaction(AActor* relevantActor) {
    return NAME_None;
}

int32 UYGameplayPlayerExternalFunctions::FindPlayersWithGivenMatchState(UObject* objectContext, EYPlayerMatchFinishedResult desiredFinishResult) {
    return 0;
}

float UYGameplayPlayerExternalFunctions::FindPlayerDistanceTraveled(AActor* relevantActor) {
    return 0.0f;
}

FString UYGameplayPlayerExternalFunctions::FindLocalCountryCode() {
    return TEXT("");
}

bool UYGameplayPlayerExternalFunctions::FindEquippedLoadoutOnPawn(AActor* relevantActor, FYEquippedPlayerLoadout& outData) {
    return false;
}

FVector UYGameplayPlayerExternalFunctions::FindCameraCollisionEndpoint(AActor* actorContext, const FVector& StartLocation, const FVector& EndLocation) {
    return FVector{};
}

EYDeviceCategory UYGameplayPlayerExternalFunctions::FindActiveWeaponDevicecategory(AActor* relevantActor) {
    return EYDeviceCategory::AssaultRifle;
}

EYMeshViewState UYGameplayPlayerExternalFunctions::FindActiveMeshViewState(AActor* relevantContext) {
    return EYMeshViewState::NoneAssigned;
}

bool UYGameplayPlayerExternalFunctions::FindActiveMeleeMesh(AActor* relevantContext, EYMeshViewState desiredViewState, TSoftObjectPtr<USkeletalMesh>& outMesh) {
    return false;
}

FVector UYGameplayPlayerExternalFunctions::EvaluatePotentialAdjustementFromViewDirection(AActor* ownerOfTrace, TEnumAsByte<ECollisionChannel> collisionChannelToUse, const FVector& EndLocation) {
    return FVector{};
}


