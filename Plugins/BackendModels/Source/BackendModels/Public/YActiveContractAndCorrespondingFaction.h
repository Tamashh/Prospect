#pragma once
#include "CoreMinimal.h"
#include "YActiveContractAndCorrespondingFaction.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractAndCorrespondingFaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    BACKENDMODELS_API FYActiveContractAndCorrespondingFaction();
};

