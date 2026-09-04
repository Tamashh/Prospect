#pragma once
#include "CoreMinimal.h"
#include "YCanGoToStationResponse.generated.h"

USTRUCT(BlueprintType)
struct FYCanGoToStationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canGoToStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString timeStampUpdate;
    
    YPLATFORMUTILS_API FYCanGoToStationResponse();
};

