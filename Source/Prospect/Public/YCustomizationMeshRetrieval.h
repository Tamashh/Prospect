#pragma once
#include "CoreMinimal.h"
#include "YCustomizationMaterialAssociation.h"
#include "YCustomizationMeshRetrieval.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYCustomizationMeshRetrieval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_mesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomizationMaterialAssociation> m_materialData;

    PROSPECT_API FYCustomizationMeshRetrieval();
};
