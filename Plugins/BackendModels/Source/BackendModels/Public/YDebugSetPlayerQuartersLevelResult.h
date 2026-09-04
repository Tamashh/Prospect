#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugSetPlayerQuartersLevelResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetPlayerQuartersLevelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugSetPlayerQuartersLevelResult();
};

