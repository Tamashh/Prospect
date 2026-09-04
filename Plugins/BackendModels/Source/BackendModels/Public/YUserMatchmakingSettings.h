#pragma once
#include "CoreMinimal.h"
#include "YPurchaseInsuranceRequest.h"
#include "YUserMatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct FYUserMatchmakingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReadyForMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString selectedMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSecretLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPurchaseInsuranceRequest purchaseInsuranceRequest;
    
    BACKENDMODELS_API FYUserMatchmakingSettings();
};

