#pragma once
#include "CoreMinimal.h"
#include "YNewsItem.h"
#include "YNewsItemsContainer.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItem> m_newsItems;
    
    PROSPECT_API FYNewsItemsContainer();
};

