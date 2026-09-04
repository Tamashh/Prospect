#pragma once
#include "CoreMinimal.h"
#include "YClaimedContractBackendData.generated.h"

USTRUCT(BlueprintType)
struct FYClaimedContractBackendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userIdReceivedFromBackend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString claimedContractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString newContractIdOnBoard;
    
    PROSPECT_API FYClaimedContractBackendData();
};

