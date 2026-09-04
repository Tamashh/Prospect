#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YPlayerItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_setType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
    PROSPECT_API FYPlayerItemEntry();
};

