#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CurrentStaminaChangedSignatureDelegate.h"
#include "EYMatchState.h"
#include "MaxStaminaChangedSignatureDelegate.h"
#include "StaminaUseAttemptedSignatureDelegate.h"
#include "YDealtDamageData.h"
#include "YResourceComponent.h"
#include "YStaminaComponent.generated.h"

class AController;
class APlayerState;
class AYPlayerCharacter;
class UYGameplayAttributesComponent;
class UYHelmetGoggleComponent;
class UYPlayerCharacterStateComponent;
class UYPlayerMovementComponent;
class UYStateInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYStaminaComponent : public UYResourceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentStaminaChangedSignature CurrentStaminaChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaxStaminaChangedSignature MaxStaminaChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaminaUseAttemptedSignature StaminaUseAttemptedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_staminaBelowTenPercent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_infiniteStaminaActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_staminaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStamina, meta=(AllowPrivateAccess=true))
    float m_currentStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_ownerGameplayAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerMovementComponent* m_characterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYHelmetGoggleComponent* m_characterHelmetGoggleComponent;
    
public:
    UYStaminaComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetResourceDataRow(FDataTableRowHandle newRowHandle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetResourceCurrentValue(float newCurrentValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromResourceCurrentValue(float deltaValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(UYWeaponPlayerControllerRuntimeComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnStartClimbing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStamina(float previousStamina);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeStateStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeHeavyStateStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(AController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsResourceRegenerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsResourceDegenerating() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerStateSet(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMatchStateUpdated(EYMatchState matchState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnJumped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceRegenerationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceRegenerationDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceDegenerationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetConsumedStamina();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddToResourceCurrentValue(float deltaValue);
    
};

