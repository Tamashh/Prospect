#pragma once
#include "CoreMinimal.h"
#include "YActiveContractPlayerData.h"
#include "YFactionsContractsData.h"
#include "YGetPlayerContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerContractsResult {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 refreshHours24UtcFromBackend;
    
    BACKENDMODELS_API FYGetPlayerContractsResult();
};

