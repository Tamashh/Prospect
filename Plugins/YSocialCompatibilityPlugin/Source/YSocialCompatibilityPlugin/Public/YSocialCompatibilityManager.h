#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOnRequestCompatabilitySignatureDelegate.h"
#include "YOnRequestSocialProfilesSignatureDelegate.h"
#include "YSocialCompatibilityManager.generated.h"

UCLASS(Blueprintable)
class YSOCIALCOMPATIBILITYPLUGIN_API UYSocialCompatibilityManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestCompatabilitySignature OnSuccessfulSocialProfileRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestSocialProfilesSignature OnRequestSocialProfilesDelegate;
    
    UYSocialCompatibilityManager();

};

