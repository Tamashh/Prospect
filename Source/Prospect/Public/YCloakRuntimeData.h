#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCloakRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FYCloakRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    PROSPECT_API FYCloakRuntimeData();
};

