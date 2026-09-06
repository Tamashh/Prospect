#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYPlayerSetType.h"
#include "EYUIInventoryInitializationType.h"
#include "YInventoryItem.h"
#include "YUIInventoryData.h"
#include "YWidget_Inventory_Base.generated.h"

class APlayerState;
class UUserWidget;
class UYStateInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_Base : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMoveItemToSlotSignature, int32, originInventoryComponentId, int32, targetInventoryComponentId, const FYInventoryItem&, inventoryItem, int32, amountToMove, EYPlayerSetType, targetSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryScreenOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryScreenClosed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryScreenOpened OnInventoryScreenOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryScreenClosed OnInventoryScreenClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveItemToSlotSignature OnMoveItemToSlotDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUIInventoryInitializationType m_uiInventoryInitializionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUIInventoryData m_previousUIInventoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_refreshingEnabled;
    
public:
    UYWidget_Inventory_Base();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInventoryId(int32 inventoryComponentId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSetCallback(APlayerState* NewPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoryDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryStateLeft(bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryStateEntered();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnContainerInventorySetDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnContainerInventoryDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryCustomInitialized() const;

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYStateInventoryComponent* GetRelevantStateInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryId() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesInventoryShowWeight() const;

public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EYPlayerSetType BP_GetTargetSetType(UUserWidget* InWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BP_GetCurrentWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BP_GetCurrentMaxWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BP_CanMoveItem(const FYInventoryItem& inventoryItem, UUserWidget* InWidget);
    
};

