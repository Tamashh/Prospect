#pragma once
#include "CoreMinimal.h"
#include "YVivoxJoinTokenRequest.h"
#include "YVivoxJoinData.generated.h"

USTRUCT(BlueprintType)
struct FYVivoxJoinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYVivoxJoinTokenRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    BACKENDMODELS_API FYVivoxJoinData();
};

