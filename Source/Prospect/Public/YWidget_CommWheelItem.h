#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYPlayerSetType.h"
#include "EYWheelType.h"
#include "OnIconTextureLoadedDelegate.h"
#include "OnMouseHoverStateChangedDelegate.h"
#include "YBaseWheelEntry.h"
#include "YCommWheelEntry.h"
#include "YInventoryItem.h"
#include "YWidget_CommWheelItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_CommWheelItem : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_selectionWheelDataTableRowHandle;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseHoverStateChanged OnMouseHoverStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIconTextureLoaded OnIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_wheelEntryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_vanityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_cachedWheelTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useUpperCaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_consumableSlot;
    
    UYWidget_CommWheelItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataTableWheelRowHandleSet(FYBaseWheelEntry wheelEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsSelected(bool IsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptyItemSet(EYWheelType wheelType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommWheelRowHandleSet(FYCommWheelEntry wheelEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetConsumableInfo(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void AssetsLoaded(FYBaseWheelEntry itemDataWheelEntry);
    
};

