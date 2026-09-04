#pragma once
#include "CoreMinimal.h"
#include "YMeshAttachment.generated.h"

class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_materialOverride;
    
    PROSPECT_API FYMeshAttachment();
};

