#pragma once
#include "CoreMinimal.h"
#include "YPlayerItemEntry.h"
#include "YPlayerDataSet.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_permutationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerItemEntry> m_setItems;
    
    PROSPECT_API FYPlayerDataSet();
};

