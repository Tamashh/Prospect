#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YPlayerHealthAudioData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerHealthAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_playLowHealthAlarmAtPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_lowHealthAlarmStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_lowHealthAlarmStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_lowHealthAlarmStopDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_fallingDamageEvent;
    
    PROSPECT_API FYPlayerHealthAudioData();
};

