#pragma once
#include "CoreMinimal.h"
#include "YBoardsContractsInitData.h"
#include "YPlayerContractsInitData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerContractsInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBoardsContractsInitData playerBoardsContractsIncludingActiveOnes;
    
    PROSPECT_API FYPlayerContractsInitData();
};

