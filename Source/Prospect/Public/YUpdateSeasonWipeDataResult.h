#pragma once
#include "CoreMinimal.h"
#include "YUpdateSeasonWipeDataResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYUpdateSeasonWipeDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    FYUpdateSeasonWipeDataResult();
};

