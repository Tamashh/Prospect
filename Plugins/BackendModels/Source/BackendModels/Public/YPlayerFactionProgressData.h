#pragma once
#include "CoreMinimal.h"
#include "YPlayerFactionProgressData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerFactionProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentProgression;
    
    BACKENDMODELS_API FYPlayerFactionProgressData();
};

