#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "YAITargetInfo.h"
#include "YBTService_Aggro.generated.h"

class AActor;
class AYAIController;
class UYAIAggroComponent;

UCLASS(Abstract, Blueprintable)
class UYBTService_Aggro : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAIController* m_controllerAIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYAIAggroComponent* m_cachedAIDataComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_combatActorKey;
    
    UYBTService_Aggro();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCombatTargetUpdated(AActor* TargetActor, FYAITargetInfo targetInfo);
    
};

