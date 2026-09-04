#pragma once
#include "CoreMinimal.h"
#include "YUpdateGlobalVanity.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateGlobalVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    BACKENDMODELS_API FYUpdateGlobalVanity();
};

