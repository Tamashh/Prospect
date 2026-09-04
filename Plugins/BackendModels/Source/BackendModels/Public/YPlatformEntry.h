#pragma once
#include "CoreMinimal.h"
#include "EYPlatformTypes.h"
#include "YPlatformEntry.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlatformEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlatformTypes Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FYPlatformEntry();
};

