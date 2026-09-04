#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnAbilityActivatedDelegate.h"
#include "OnAbilityComponentsChangedDelegate.h"
#include "OnAbilityConsumedDelegate.h"
#include "OnAbilityDroppedDelegate.h"
#include "OnAbilityEquipedDelegate.h"
#include "OnAbilityUnequipedDelegate.h"
#include "OnSelectedConsumableChangedDelegate.h"
#include "YInventoryItem.h"
#include "YControllerInventoryAbilityComponent.generated.h"

class UYCharacterAbilityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerInventoryAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_emptyAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_OnAbilityComponents, meta=(AllowPrivateAccess=true))
    TArray<UYCharacterAbilityComponent*> m_runtimeAbilityComponents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityEquiped OnAbilityEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityUnequiped OnAbilityUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityActivated OnAbilityActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityConsumed OnControllerAbilityConsumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedConsumableChanged OnSelectedConsumableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityComponentsChanged OnAbilityComponentsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityDropped OnAbilityDropped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYCharacterAbilityComponent* m_activeAbilityComponent;
    
public:
    UYControllerInventoryAbilityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnAbilityComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityConsumedByUse(UYCharacterAbilityComponent* activatedComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    UYCharacterAbilityComponent* CreateNewAbilityComponent(const FYInventoryItem& inventoryItem);
    
};

