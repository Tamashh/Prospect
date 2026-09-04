#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YBaseModRow.h"
#include "YOverridenModInstanceData.h"
#include "YModRow.generated.h"

USTRUCT(BlueprintType)
struct FYModRow : public FYBaseModRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_scopeTuningRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFlashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socketLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOverridenModInstanceData m_defaultModInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYOverridenModInstanceData> m_perHandlePropertyDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_scannableRowHandles;
    
    PROSPECT_API FYModRow();
};

