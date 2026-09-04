#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextAmount.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextAmount : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemComponentTextAmountUpdated, const FText&, amountText);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemComponentTextAmountUpdated OnComponentTextAmountUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useBackendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useMinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_minAmountThresholdToShowWidget;
    
public:
    UYWidget_ItemComponentTextAmount();

    UFUNCTION(BlueprintCallable)
    void SetAmountText(const FText& newAmountText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAmountInternal(int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStashItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdate(UYStateInventoryComponent* inventoryComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrenciesUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAmountUpdated();
    
};

