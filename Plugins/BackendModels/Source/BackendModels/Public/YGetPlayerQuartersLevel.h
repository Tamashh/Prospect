#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerQuartersLevel.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerQuartersLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetPlayerQuartersLevel();
};

