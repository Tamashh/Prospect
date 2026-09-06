#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YAIMeleeAttackComboDefinition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAIMeleeAttackComboDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_requiredComboTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_meleeAttackMontages;

    PROSPECT_API FYAIMeleeAttackComboDefinition();
};

