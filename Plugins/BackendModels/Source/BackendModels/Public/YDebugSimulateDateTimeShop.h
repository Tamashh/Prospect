#pragma once
#include "CoreMinimal.h"
#include "YDebugSimulateDateTimeShop.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSimulateDateTimeShop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DateTime;
    
    BACKENDMODELS_API FYDebugSimulateDateTimeShop();
};

