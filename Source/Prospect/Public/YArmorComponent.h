#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "Components/ActorComponent.h"
#include "YActiveArmorData.h"
#include "YArmorComponentDurabilityUpdatedSignatureDelegate.h"
#include "YArmorComponentUpdatedSignatureDelegate.h"
#include "YDealtDamageData.h"
#include "YArmorComponent.generated.h"

class AController;
class APlayerState;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYArmorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYArmorComponentUpdatedSignature OnArmorUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYArmorComponentDurabilityUpdatedSignature OnArmorDurabilityUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYArmorComponentUpdatedSignature OnArmorBrokenEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_effectiveHealthPerArmorConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageReductionScalarMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageReductionScalarMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveArmor, meta=(AllowPrivateAccess=true))
    TArray<FYActiveArmorData> m_activeArmor;
    
public:
    UYArmorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetEquippedArmorForItemType(EYItemType ItemType, FYActiveArmorData& outActiveArmor) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveArmor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasArmorEquipped(EYItemType ItemType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerStateChanged(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnControllerChanged(AController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYActiveArmorData> GetActiveArmor() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EvaluateDamage(FYDealtDamageData& outModifiedDamageData);
    
};

