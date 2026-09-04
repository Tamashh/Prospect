#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YBattleEyeInstance.generated.h"

UCLASS(Blueprintable)
class YBATTLEEYE_API UYBattleEyeInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dataSuccessfullyCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isKickActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isKickReasonChecksActive;
    
public:
    UYBattleEyeInstance();

};

