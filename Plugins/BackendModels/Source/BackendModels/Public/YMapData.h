#pragma once
#include "CoreMinimal.h"
#include "YMapData.generated.h"

USTRUCT(BlueprintType)
struct FYMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    BACKENDMODELS_API FYMapData();
};

