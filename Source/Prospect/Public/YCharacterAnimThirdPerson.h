#pragma once
#include "CoreMinimal.h"
#include "YCharacterAnimThirdPerson.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FYCharacterAnimThirdPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* m_walkThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* m_walkCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idlePoseThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idlePoseCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleAimPoseThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleOffsetThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleAimOffsetPoseThirdPerson;
    
    PROSPECT_API FYCharacterAnimThirdPerson();
};

