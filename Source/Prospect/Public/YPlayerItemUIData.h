#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "EYPlayerSetTypeSimplified.h"
#include "YPlayerItemUIData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetTypeSimplified m_inventoryPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_baseItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_itemBackendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    PROSPECT_API FYPlayerItemUIData();
};

