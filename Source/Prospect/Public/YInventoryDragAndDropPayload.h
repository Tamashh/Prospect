#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYItemImprovementScreenSlotType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YInventoryDragAndDropPayload.generated.h"

UCLASS(Blueprintable)
class UYInventoryDragAndDropPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_draggedItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dropAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemImprovementScreenSlotType m_itemImprovementScreenSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldCreateNewItem;
    
    UYInventoryDragAndDropPayload();

};

