#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "Engine/DataTable.h"
#include "YModEntry.generated.h"

USTRUCT(BlueprintType)
struct FYModEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_insuredAttachmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInsuranceType m_insurance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_insuranceOwnerPlayfabId;
    
    PROSPECT_API FYModEntry();
};

