#pragma once
#include "CoreMinimal.h"
#include "YVanityData.generated.h"

USTRUCT(BlueprintType)
struct FYVanityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 S;
    
    BACKENDMODELS_API FYVanityData();
};

