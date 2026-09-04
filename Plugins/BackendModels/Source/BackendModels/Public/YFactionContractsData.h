#pragma once
#include "CoreMinimal.h"
#include "YFactionContractData.h"
#include "YFactionContractsData.generated.h"

USTRUCT(BlueprintType)
struct FYFactionContractsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFactionContractData> contracts;
    
    BACKENDMODELS_API FYFactionContractsData();
};

