#pragma once
#include "CoreMinimal.h"
#include "YBagItems.generated.h"

USTRUCT(BlueprintType)
struct FYBagItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_bagItemsIds;
    
    PROSPECT_API FYBagItems();
};

