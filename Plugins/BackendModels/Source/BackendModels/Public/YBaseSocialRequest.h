#pragma once
#include "CoreMinimal.h"
#include "YBaseSocialRequest.generated.h"

USTRUCT(BlueprintType)
struct FYBaseSocialRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetPlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString screen;
    
    BACKENDMODELS_API FYBaseSocialRequest();
};

