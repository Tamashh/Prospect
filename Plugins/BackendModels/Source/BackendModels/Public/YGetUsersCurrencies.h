#pragma once
#include "CoreMinimal.h"
#include "YGetUsersCurrencies.generated.h"

USTRUCT(BlueprintType)
struct FYGetUsersCurrencies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    BACKENDMODELS_API FYGetUsersCurrencies();
};

