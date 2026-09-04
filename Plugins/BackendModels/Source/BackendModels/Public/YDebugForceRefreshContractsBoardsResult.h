#pragma once
#include "CoreMinimal.h"
#include "YActiveContractPlayerData.h"
#include "YFactionsContractsData.h"
#include "YDebugForceRefreshContractsBoardsResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugForceRefreshContractsBoardsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractPlayerData> activeContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFactionsContractsData factionsContracts;
    
    BACKENDMODELS_API FYDebugForceRefreshContractsBoardsResult();
};

