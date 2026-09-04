#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YActorDamageNormalizationComponent.generated.h"

class AYAIController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYActorDamageNormalizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYAIController*> m_tokenHolderAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentMaxTokenCount;
    
    UYActorDamageNormalizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateAIHasActorAsTarget(AYAIController* controoler, bool isAITargetingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FVector> BP_OnGatherCurrentTokens();
    
};

