#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YButtonAudio.generated.h"

USTRUCT(BlueprintType)
struct FYButtonAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_pressedDTSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_releasedDTSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_hoveredDTSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_unhoveredDTSound;
    
    PROSPECT_API FYButtonAudio();
};

