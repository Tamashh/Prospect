#pragma once
#include "CoreMinimal.h"
#include "YGetUserCharacterVisualizationData.generated.h"

USTRUCT(BlueprintType)
struct FYGetUserCharacterVisualizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserId;
    
    BACKENDMODELS_API FYGetUserCharacterVisualizationData();
};

