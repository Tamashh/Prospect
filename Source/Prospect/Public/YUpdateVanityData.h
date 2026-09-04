#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YUpdateVanityData.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateVanityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    PROSPECT_API FYUpdateVanityData();
};

