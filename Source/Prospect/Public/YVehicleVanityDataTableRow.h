#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YVanityItemRowBase.h"
#include "YVehicleVanityDataTableRow.generated.h"

class AYVehicle;

USTRUCT(BlueprintType)
struct FYVehicleVanityDataTableRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_overrideVehicleMovementAudioSoundQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_overrideVehicleBoostAudioSoundQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AYVehicle> m_overridenVehicleSubclass;
    
    PROSPECT_API FYVehicleVanityDataTableRow();
};

