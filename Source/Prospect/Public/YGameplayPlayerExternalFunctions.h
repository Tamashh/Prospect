#pragma once
#include "CoreMinimal.h"
#include "EYDeviceCategory.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EYMeshViewState.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YEquippedPlayerLoadout.h"
#include "YGameplayPlayerExternalFunctions.generated.h"

class AActor;
class USkeletalMesh;

UCLASS(Blueprintable)
class UYGameplayPlayerExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYGameplayPlayerExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXPEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsThirdPersonOnlyViewStateEnabled(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayFirstPersonComseticEffects(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOfflineGearStoreEnabled(UObject* relevantObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewRecoilCompensationEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInfiniteMatchLobbyEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFullScreenWidgetRuntimeDisabled(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCodeDrivenHighlightingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBannerFeatureEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FindUIDFromActor(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindTimeSinceLastExecutedSpawningInitialized(AActor* relevantContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindThirdPersonWeaponMeshSocketName(AActor* relevantContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindSelectedFaction(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindPlayersWithGivenMatchState(UObject* objectContext, EYPlayerMatchFinishedResult desiredFinishResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindPlayerDistanceTraveled(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable)
    static FString FindLocalCountryCode();
    
    UFUNCTION(BlueprintCallable)
    static bool FindEquippedLoadoutOnPawn(AActor* relevantActor, FYEquippedPlayerLoadout& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindCameraCollisionEndpoint(AActor* actorContext, const FVector& StartLocation, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYDeviceCategory FindActiveWeaponDevicecategory(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYMeshViewState FindActiveMeshViewState(AActor* relevantContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindActiveMeleeMesh(AActor* relevantContext, EYMeshViewState desiredViewState, TSoftObjectPtr<USkeletalMesh>& outMesh);
    
    UFUNCTION(BlueprintCallable)
    static FVector EvaluatePotentialAdjustementFromViewDirection(AActor* ownerOfTrace, TEnumAsByte<ECollisionChannel> collisionChannelToUse, const FVector& EndLocation);
    
};

