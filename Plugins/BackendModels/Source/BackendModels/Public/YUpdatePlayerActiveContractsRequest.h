#pragma once
#include "CoreMinimal.h"
#include "YContractProgressData.h"
#include "YGameServerRequest.h"
#include "YUpdatePlayerActiveContractsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdatePlayerActiveContractsRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYContractProgressData> contractsProgress;
    
    BACKENDMODELS_API FYUpdatePlayerActiveContractsRequest();
};

