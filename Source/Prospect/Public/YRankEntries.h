#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankDataEntry.h"
#include "YRankEntries.generated.h"

USTRUCT(BlueprintType)
struct FYRankEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerRankDataEntry> m_rankEntries;
    
    PROSPECT_API FYRankEntries();
};

