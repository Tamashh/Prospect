#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYLootContainerTier.h"
#include "YAssetVariationDefinitionRow.h"
#include "YLootContainerDefinitionRow.generated.h"

class UAnimSequenceBase;
class UMaterialInterface;
class USkeletalMesh;
class USoundBase;

USTRUCT(BlueprintType)
struct FYLootContainerDefinitionRow : public FYAssetVariationDefinitionRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_containerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> m_soundOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> m_soundClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_skeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> m_skeletalMeshMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> m_openAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYLootContainerTier, FDataTableRowHandle> m_lootTiers;
    
    PROSPECT_API FYLootContainerDefinitionRow();
};

