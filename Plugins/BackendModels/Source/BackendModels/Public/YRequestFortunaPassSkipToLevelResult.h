#pragma once
#include "CoreMinimal.h"
#include "EYFortunaPassToastReponseType.h"
#include "YRequestFortunaPassSkipToLevelResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestFortunaPassSkipToLevelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFortunaPassToastReponseType errorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 updatedAurumBalance;
    
    BACKENDMODELS_API FYRequestFortunaPassSkipToLevelResult();
};

