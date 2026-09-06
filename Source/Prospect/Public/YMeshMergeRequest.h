#pragma once
#include "CoreMinimal.h"
#include "YActiveCustomizationData.h"
#include "YCustomizationMeshRetrieval.h"
#include "YMeshMergeRequest.generated.h"

class UObject;
class UPhysicsAsset;
class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct FYMeshMergeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_outer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_mergedMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_meshes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* m_skeleton;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* m_physicsAsset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveCustomizationData m_customizationData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomizationMeshRetrieval> m_cdoMaterialMapping;

    PROSPECT_API FYMeshMergeRequest();
};
