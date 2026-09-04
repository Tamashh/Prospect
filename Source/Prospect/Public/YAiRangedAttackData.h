#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YAIRangedAttackDefinitionNew.h"
#include "YAiRangedAttackData.generated.h"

class AActor;
class AYAICharacter;
class AYProjectile;

USTRUCT(BlueprintType)
struct FYAiRangedAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYAICharacter* m_aiAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_victimActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIRangedAttackDefinitionNew m_rangedAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYProjectile* m_preSpawnedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_overrideAttackerLocation;
    
    PROSPECT_API FYAiRangedAttackData();
};

