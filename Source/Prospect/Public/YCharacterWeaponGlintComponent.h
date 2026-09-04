#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YCharacterWeaponGlintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterWeaponGlintComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCharacterWeaponGlintComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCreateGlint();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveTargeting(bool interupted);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnLeaveTargeting(bool NewShouldCreateGlint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnEnterTargeting(bool NewShouldCreateGlint);
    
};

