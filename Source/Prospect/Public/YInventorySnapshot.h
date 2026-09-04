#pragma once
#include "CoreMinimal.h"
#include "YInventoryInfo.h"
#include "YPlayerDataSet.h"
#include "YPlayerInventory.h"
#include "YPlayerVanityInventory.h"
#include "YInventorySnapshot.generated.h"

USTRUCT(BlueprintType)
struct FYInventorySnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryInfo m_inventoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_playerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_playerStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerDataSet m_playerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerVanityInventory m_playerVanityItems;
    
    PROSPECT_API FYInventorySnapshot();
};

