#pragma once
#include "CoreMinimal.h"
#include "YCloakMaterialsInfo.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FYCloakMaterialsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> m_materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* m_meshComponent;
    
    PROSPECT_API FYCloakMaterialsInfo();
};

