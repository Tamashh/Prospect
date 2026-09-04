#pragma once
#include "CoreMinimal.h"
#include "EYUpdateCategory.h"
#include "YConfigEntry.h"
#include "YConfigurationUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYConfigurationUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUpdateCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYConfigEntry Data;
    
    BACKENDMODELS_API FYConfigurationUpdated();
};

