#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYImpactActorRotation.h"
#include "Templates/SubclassOf.h"
#include "YGameplayAttributeModifier.h"
#include "YImpactDataTableRow.h"
#include "YWeaponImpactDataTableRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYWeaponImpactDataTableRow : public FYImpactDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYImpactActorRotation m_actorSpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_tuningDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_spawnedActorAssociatedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> m_replicatedActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_nonReplicatedActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_gameplayAttributesToAddOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldHaveFxCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_aiSenseTriggerRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useOwnerAsInstigatorForSenseTrigger;
    
    PROSPECT_API FYWeaponImpactDataTableRow();
};

