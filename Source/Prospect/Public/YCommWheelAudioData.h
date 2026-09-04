#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCommWheelAudioData.generated.h"

USTRUCT(BlueprintType)
struct FYCommWheelAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onOpenCommWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onOpenSubCommWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onAbortCommWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onHoverOverItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onCommandInput;
    
    PROSPECT_API FYCommWheelAudioData();
};

