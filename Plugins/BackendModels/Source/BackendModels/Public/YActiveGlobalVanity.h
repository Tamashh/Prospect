#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.generated.h"

USTRUCT(BlueprintType)
struct FYActiveGlobalVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> activeGlobalVanityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString droppodId;
    
    BACKENDMODELS_API FYActiveGlobalVanity();
};

