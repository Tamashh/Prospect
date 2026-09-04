#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYMineralTier.h"
#include "YAssetVariationDefinitionRow.h"
#include "YMineralDefinitionRow.generated.h"

class UDestructibleMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYMineralDefinitionRow : public FYAssetVariationDefinitionRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDestructibleMesh> m_destructibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_scannableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> m_destructibleMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYMineralTier, FDataTableRowHandle> m_lootListRoll;
    
    PROSPECT_API FYMineralDefinitionRow();
};

