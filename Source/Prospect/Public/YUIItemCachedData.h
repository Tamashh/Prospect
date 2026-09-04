#pragma once
#include "CoreMinimal.h"
#include "YUIItemCachedData.generated.h"

class UYWidget_ItemContainer;

USTRUCT(BlueprintType)
struct FYUIItemCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_previousAmount;
    
    PROSPECT_API FYUIItemCachedData();
};

