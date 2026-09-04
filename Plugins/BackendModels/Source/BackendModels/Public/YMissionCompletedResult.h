#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YMissionCompletedResult.generated.h"

USTRUCT(BlueprintType)
struct FYMissionCompletedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> updatedCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    BACKENDMODELS_API FYMissionCompletedResult();
};

