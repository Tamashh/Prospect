#pragma once
#include "CoreMinimal.h"
#include "YDebugVanityUpdateAmount.generated.h"

USTRUCT(BlueprintType)
struct FYDebugVanityUpdateAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vanity_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    BACKENDMODELS_API FYDebugVanityUpdateAmount();
};

