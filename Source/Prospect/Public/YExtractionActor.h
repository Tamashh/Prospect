#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYExtractionActorState.h"
#include "YExtractionActor.generated.h"

class UYObjectInteractionComponent;

UCLASS(Blueprintable)
class AYExtractionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYObjectInteractionComponent* m_interactionComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_activationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_activationDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EYExtractionActorState m_state;
    
public:
    AYExtractionActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void ExtractionStationActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateExtractionStation();
    
};

