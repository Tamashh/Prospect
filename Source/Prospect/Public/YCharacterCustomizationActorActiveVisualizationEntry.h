#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YCharacterCustomizationActorActiveVisualizationEntry.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FYCharacterCustomizationActorActiveVisualizationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> m_activeSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_categoryRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationCategory m_category;
    
    PROSPECT_API FYCharacterCustomizationActorActiveVisualizationEntry();
};

