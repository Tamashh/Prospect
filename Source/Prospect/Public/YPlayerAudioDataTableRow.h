#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCommWheelAudioData.h"
#include "YDataTableRowBase.h"
#include "YPlayerAbilitiesAudioData.h"
#include "YPlayerAnnouncementAudioData.h"
#include "YPlayerHUDAudioData.h"
#include "YPlayerHealthAudioData.h"
#include "YPlayerPactHUDAudioData.h"
#include "YPlayerAudioDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerAudioDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_mineralLootDiscoveredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerHealthAudioData m_healthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCommWheelAudioData m_commWheelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerAnnouncementAudioData m_announcementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerHUDAudioData m_hudAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerPactHUDAudioData m_pactHUDAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_standEventHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerAbilitiesAudioData m_abilities;
    
    PROSPECT_API FYPlayerAudioDataTableRow();
};

