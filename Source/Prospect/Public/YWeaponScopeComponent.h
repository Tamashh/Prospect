#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YWeaponScopeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYWeaponScopeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYWeaponScopeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeaveTargeting_BP(bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterTargeting_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasThermalVisionMod();
    
};

