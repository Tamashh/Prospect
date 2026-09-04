#pragma once
#include "CoreMinimal.h"
#include "YDebugFortunaPassSkipNextLevelResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYDebugFortunaPassSkipNextLevelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    FYDebugFortunaPassSkipNextLevelResult();
};

