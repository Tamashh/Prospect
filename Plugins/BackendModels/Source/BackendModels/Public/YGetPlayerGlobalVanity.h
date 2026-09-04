#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerGlobalVanity.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerGlobalVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetPlayerGlobalVanity();
};

