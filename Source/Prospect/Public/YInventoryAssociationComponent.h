#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnInventoryItemChangedDelegate.h"
#include "YInventoryItem.h"
#include "YInventoryAssociationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYInventoryAssociationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventoryItem, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_itemHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChanged OnItemDataChanged;
    
    UYInventoryAssociationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInventoryItem(FYInventoryItem Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InventoryItem(FYInventoryItem oldRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInventoryItem GetInventoryItem() const;
    
};

