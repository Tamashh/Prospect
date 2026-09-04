#pragma once
#include "CoreMinimal.h"
#include "YAIPerPlayerCombatData.generated.h"

USTRUCT(BlueprintType)
struct FYAIPerPlayerCombatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ai_damage_dealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hits_by_ai;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weakspots_hits_by_ai;
    
    PROSPECT_API FYAIPerPlayerCombatData();
};

