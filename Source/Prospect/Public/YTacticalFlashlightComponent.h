#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YTacticalFlashlightComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYTacticalFlashlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYTacticalFlashlightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponSwitched();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFlashlightMod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetCameraFOV(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnWeaponSwitched();
    
};

