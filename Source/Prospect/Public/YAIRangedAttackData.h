#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YAIRangedAttackRow.h"
#include "YAIRangedAttackData.generated.h"

class AActor;
class ACharacter;
class AYProjectile;

USTRUCT(BlueprintType)
struct FYAIRangedAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* m_aiAttacker;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_victimActor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIRangedAttackRow m_rangedAttackDefinition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYProjectile* m_preSpawnedProjectile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_locationAttackerToTest;

    PROSPECT_API FYAIRangedAttackData();
};

