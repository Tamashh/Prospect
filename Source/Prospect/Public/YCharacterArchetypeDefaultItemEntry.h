#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCharacterArchetypeDefaultItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterArchetypeDefaultItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    PROSPECT_API FYCharacterArchetypeDefaultItemEntry();
};

