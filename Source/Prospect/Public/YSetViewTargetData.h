#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "YSetViewTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYSetViewTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_newViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams m_newTargetTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lockTime;
    
    PROSPECT_API FYSetViewTargetData();
};

