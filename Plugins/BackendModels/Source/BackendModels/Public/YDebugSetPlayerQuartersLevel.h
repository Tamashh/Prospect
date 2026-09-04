#pragma once
#include "CoreMinimal.h"
#include "YDebugSetPlayerQuartersLevel.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetPlayerQuartersLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    BACKENDMODELS_API FYDebugSetPlayerQuartersLevel();
};

