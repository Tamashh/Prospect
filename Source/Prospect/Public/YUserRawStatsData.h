#pragma once
#include "CoreMinimal.h"
#include "YRawStatEntry.h"
#include "YUserRawStatsData.generated.h"

USTRUCT(BlueprintType)
struct FYUserRawStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_productUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRawStatEntry> m_statEntries;
    
    PROSPECT_API FYUserRawStatsData();
};

