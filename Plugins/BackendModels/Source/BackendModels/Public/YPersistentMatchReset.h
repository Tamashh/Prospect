#pragma once
#include "CoreMinimal.h"
#include "YPersistentMatchReset.generated.h"

USTRUCT(BlueprintType)
struct FYPersistentMatchReset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYPersistentMatchReset();
};

