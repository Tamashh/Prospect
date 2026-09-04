#pragma once
#include "CoreMinimal.h"
#include "YBaseActivityStats.h"
#include "YBossEncounterActivityStats.generated.h"

USTRUCT(BlueprintType)
struct FYBossEncounterActivityStats : public FYBaseActivityStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 boss_damage_done;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 boss_damage_taken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 encounter_duration;
    
    PROSPECT_API FYBossEncounterActivityStats();
};

