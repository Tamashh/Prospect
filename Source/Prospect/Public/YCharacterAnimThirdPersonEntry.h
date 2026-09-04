#pragma once
#include "CoreMinimal.h"
#include "YCharacterAnimThirdPersonEntry.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FYCharacterAnimThirdPersonEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idleThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> m_walkThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idleCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpace> m_walkCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idlePoseThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idlePoseCrouchThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idleAimPoseThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idleOffsetThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_idleAimOffsetPoseThirdPerson;
    
    PROSPECT_API FYCharacterAnimThirdPersonEntry();
};

