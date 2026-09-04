#pragma once
#include "CoreMinimal.h"
#include "EYClientStationRequestResult.h"
#include "YMatchConnectionData.h"
#include "YRequestStationConnectResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestStationConnectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClientStationRequestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchConnectionData connectData;
    
    BACKENDMODELS_API FYRequestStationConnectResult();
};

