#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAIProjectileTransportData.h"
#include "YAIRangedAttackData.h"
#include "YAIRangedAttackFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYAIRangedAttackFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIRangedAttackFunctions();

    UFUNCTION(BlueprintCallable)
    static void SpawnProjectileActorAttachedToSocket(AActor* Owner, FName SocketName, FDataTableRowHandle rangedAttackDefinitionRowHandle);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProjectileDataValid(const FYAIProjectileTransportData& projectileData);

    UFUNCTION(BlueprintCallable)
    static FYAIProjectileTransportData DetermineProjectileAttackData(const FYAIRangedAttackData& attackData);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseRangedAttack(const FYAIRangedAttackData& attackData);
    
};

