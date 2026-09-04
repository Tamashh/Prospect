#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAiProjectileTransportData.h"
#include "YAiRangedAttackData.h"
#include "YAIRangedAttackFunctions.generated.h"

UCLASS(Blueprintable)
class UYAIRangedAttackFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIRangedAttackFunctions();

    UFUNCTION(BlueprintCallable)
    static bool DetermineProjectileTransportDataFromRangedAttackData(const FYAiRangedAttackData& rangedAttackData, FYAiProjectileTransportData& outProjectileData, bool useMovementPrediction, bool shouldRefreshBoneTransforms);
    
    UFUNCTION(BlueprintCallable)
    static bool CanHitTargetWithProjectileFromRangedAttackData(const FYAiRangedAttackData& rangedAttackData, bool shouldRefreshBoneTransforms);
    
};

