#pragma once
#include "CoreMinimal.h"
#include "YWidgetPoolItem.h"
#include "YWidgetPoolData.generated.h"

USTRUCT(BlueprintType)
struct FYWidgetPoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWidgetPoolItem> PoolItems;
    
    PROSPECT_API FYWidgetPoolData();
};

