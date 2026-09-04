#pragma once
#include "CoreMinimal.h"
#include "EYContainerType.h"
#include "YItemContainerData.generated.h"

USTRUCT(BlueprintType)
struct FYItemContainerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_itemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYContainerType m_containerType;
    
    PROSPECT_API FYItemContainerData();
};

