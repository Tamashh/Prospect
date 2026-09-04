#pragma once
#include "CoreMinimal.h"
#include "YMaintenanceModeState.generated.h"

USTRUCT(BlueprintType)
struct FYMaintenanceModeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    BACKENDMODELS_API FYMaintenanceModeState();
};

