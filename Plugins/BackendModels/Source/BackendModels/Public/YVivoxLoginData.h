#pragma once
#include "CoreMinimal.h"
#include "YVivoxLoginTokenRequest.h"
#include "YVivoxLoginData.generated.h"

USTRUCT(BlueprintType)
struct FYVivoxLoginData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYVivoxLoginTokenRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    BACKENDMODELS_API FYVivoxLoginData();
};

