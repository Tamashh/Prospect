#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YCloakDataRow.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYCloakDataRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_cloakMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_midOptionalParameter;
    
    PROSPECT_API FYCloakDataRow();
};

