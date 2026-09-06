#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerSetType.h"
#include "HelmetToggleSignatureDelegate.h"
#include "YInventoryItem.h"
#include "YHelmetGoggleComponent.generated.h"

class AYPlayerCharacter;
class AYPlayerState;
class UYArmorComponent;
class UYGameplayAttributesComponent;
class UYStaminaComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYHelmetGoggleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYStaminaComponent* m_staminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_ownerGameplayAttributeComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelmetToggleSignature OnVisionToggled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableTargetingWithVisionModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsVisionModificationEnabled, meta=(AllowPrivateAccess=true))
    bool m_isVisionModificationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_totalVisionTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_visionTransitionStaminaDrainPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hunterVisionReactivationCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_visionModificationTransitionTime;
    
public:
    UYHelmetGoggleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleVisionModification();
    
    UFUNCTION(BlueprintCallable)
    void SetVisionModificationEnabled(bool IsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetVisionModificationEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaChanged(float currentStamina);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVisionModificationEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorBroken(UYArmorComponent* armorComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisionModificationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasThermalVisionMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNightVisionMod() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerSetItemRemoved(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    bool CanEnableVisionModification() const;
    
};

