#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YDealtDamageData.h"
#include "YHitAngleData.h"
#include "YAIAnimationHelperFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYAIAnimationHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIAnimationHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void SpawnProjectileActorAttachedToSocket(AActor* Owner, FName SocketName, FDataTableRowHandle rangedAttackDefinitionRowhandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYHitAngleData DetermineHitAngle(const FYDealtDamageData& Data);
    
};

