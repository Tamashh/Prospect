#pragma once
#include "CoreMinimal.h"
#include "YMapData.h"
#include "YMapRotationData.generated.h"

USTRUCT(BlueprintType)
struct FYMapRotationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMapData> maps;
    
    BACKENDMODELS_API FYMapRotationData();
};

