#pragma once
#include "CoreMinimal.h"
#include "YItemUsingVanityInfo.generated.h"

USTRUCT(BlueprintType)
struct FYItemUsingVanityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_baseItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_customItemID;
    
    PROSPECT_API FYItemUsingVanityInfo();
};

