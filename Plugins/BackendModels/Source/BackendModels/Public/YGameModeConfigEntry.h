#pragma once
#include "CoreMinimal.h"
#include "YMapRotationData.h"
#include "YGameModeConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FYGameModeConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ranked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString jsonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMapRotationData mapRotationData;
    
    BACKENDMODELS_API FYGameModeConfigEntry();
};

