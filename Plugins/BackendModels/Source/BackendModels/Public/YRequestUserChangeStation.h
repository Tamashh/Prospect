#pragma once
#include "CoreMinimal.h"
#include "YMatchConnectionData.h"
#include "YRequestUserChangeStation.generated.h"

USTRUCT(BlueprintType)
struct FYRequestUserChangeStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchConnectionData connectData;
    
    BACKENDMODELS_API FYRequestUserChangeStation();
};

