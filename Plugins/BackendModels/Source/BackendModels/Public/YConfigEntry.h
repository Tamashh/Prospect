#pragma once
#include "CoreMinimal.h"
#include "YConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FYConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString jsonData;
    
    BACKENDMODELS_API FYConfigEntry();
};

