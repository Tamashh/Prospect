#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "EYGASAbilityInputID.h"
#include "YGASGameplayAbility.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGASGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGASAbilityInputID m_abilityInputId;
    
    UYGASGameplayAbility();

};

