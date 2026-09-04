#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "EYTransitionRequest.h"
#include "YTransitionRequestData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYTransitionRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTransitionRequest m_requestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_viewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams m_viewTargetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_withViewTargetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_withTransition;
    
    PROSPECT_API FYTransitionRequestData();
};

