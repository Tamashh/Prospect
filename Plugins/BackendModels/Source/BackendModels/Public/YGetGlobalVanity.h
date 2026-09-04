#pragma once
#include "CoreMinimal.h"
#include "YGetGlobalVanity.generated.h"

USTRUCT(BlueprintType)
struct FYGetGlobalVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetGlobalVanity();
};

