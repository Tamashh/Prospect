#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCharacterItemColumnType.h"
#include "YRequestShowTemporaryNewSelectionData.generated.h"

USTRUCT(BlueprintType)
struct FYRequestShowTemporaryNewSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_requestedRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCharacterItemColumnType m_updateType;
    
    PROSPECT_API FYRequestShowTemporaryNewSelectionData();
};

