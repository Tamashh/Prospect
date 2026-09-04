#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YCharacterRevivingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterRevivingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_appliedAttributeModifiers;
    
public:
    UYCharacterRevivingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReviveDeactivated(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnReviveActivated();
    
    UFUNCTION(BlueprintCallable)
    void LeaveReviveState();
    
    UFUNCTION(BlueprintCallable)
    void EndBlockMovement();
    
};

