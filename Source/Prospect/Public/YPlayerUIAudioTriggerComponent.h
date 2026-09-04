#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerUIAudioTriggerComponent.generated.h"

class AActor;
class APawn;
class UAudioComponent;
class UYHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerUIAudioTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_audioComponentLocalLowHealth;
    
    UYPlayerUIAudioTriggerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLowHealthSound();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStatusChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPendingDestroy(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float CurrentHealth, AActor* Instigator);
    
};

