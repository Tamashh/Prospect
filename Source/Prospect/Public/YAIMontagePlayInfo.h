#pragma once
#include "CoreMinimal.h"
#include "YAIMontagePlayInfo.generated.h"

class AActor;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAIMontagePlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rootMotionRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowPhysicsRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actorToRotateTowards;
    
    PROSPECT_API FYAIMontagePlayInfo();
};

