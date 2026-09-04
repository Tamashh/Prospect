#pragma once
#include "CoreMinimal.h"
#include "YDebugSetActiveOnboardingMissionRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActiveOnboardingMissionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool showPopup;
    
    BACKENDMODELS_API FYDebugSetActiveOnboardingMissionRequest();
};

