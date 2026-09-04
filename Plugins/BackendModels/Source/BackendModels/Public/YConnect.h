#pragma once
#include "CoreMinimal.h"
#include "YConnect.generated.h"

USTRUCT(BlueprintType)
struct FYConnect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString addr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString roomId;
    
    BACKENDMODELS_API FYConnect();
};

