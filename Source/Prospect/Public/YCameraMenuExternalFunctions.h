#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YCameraMenuExternalFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYCameraMenuExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCameraMenuExternalFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCameraTransitionToWeapon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCameraTransitionTo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCameraForWeapon(AActor* contextActor, const FName& vanityId, const FName& weaponId, FDataTableRowHandle& outVanityRowHandle, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActiveCustomizationDataForItem(AActor* contextActor, const FName& entityToVisualizeId, const FString& callerContext, EYVanityType vanityType, bool modifyItemBasedOnEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraToEmpty(const AActor* contextActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraForWeapon(AActor* contextActor, const FName& weaponId, const FString& callerContext);
    
};

