#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYExtractionActorState.h"
#include "EYInteractionType.h"
#include "YExtractionActivationActor.generated.h"

class AYExtractionActor;
class AYPlayerController_Match;
class UYObjectInteractionComponent;

UCLASS(Blueprintable)
class AYExtractionActivationActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYObjectInteractionComponent* m_interactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYExtractionActor* m_extractionActor;
    
public:
    AYExtractionActivationActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnExtractionActorStateChange(EYExtractionActorState State);
    
};

