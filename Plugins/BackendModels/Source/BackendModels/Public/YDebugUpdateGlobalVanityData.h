#pragma once
#include "CoreMinimal.h"
#include "YDebugUpdateGlobalVanityData.generated.h"

USTRUCT(BlueprintType)
struct FYDebugUpdateGlobalVanityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 variation;
    
    BACKENDMODELS_API FYDebugUpdateGlobalVanityData();
};

