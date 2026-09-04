#pragma once
#include "CoreMinimal.h"
#include "YItemMeshVisualization.generated.h"

class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct FYItemMeshVisualization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_materialOverride;
    
    PROSPECT_API FYItemMeshVisualization();
};

