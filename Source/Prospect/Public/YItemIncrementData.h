#pragma once
#include "CoreMinimal.h"
#include "YItemIncrementData.generated.h"

USTRUCT(BlueprintType)
struct FYItemIncrementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_idToIncrement;
    
    PROSPECT_API FYItemIncrementData();
};

