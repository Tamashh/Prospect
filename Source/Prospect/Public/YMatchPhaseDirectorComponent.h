#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "CurrentMatchPhaseChangedDelegate.h"
#include "YMatchPhaseData.h"
#include "YMatchPhaseGameplayRow.h"
#include "YMatchPhaseDirectorComponent.generated.h"

class UObject;
class UYMatchPhaseDirectorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYMatchPhaseDirectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMatchPhaseData, meta=(AllowPrivateAccess=true))
    FYMatchPhaseData m_currentMatchPhaseData;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentMatchPhaseChanged CurrentMatchPhaseChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_startNextMatchPhaseTimeHandle;
    
public:
    UYMatchPhaseDirectorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMatchPhaseData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPlayerSpawningAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTimeElapsedInPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMatchPhaseName();
    
    UFUNCTION(BlueprintCallable)
    FYMatchPhaseGameplayRow GetCurrentMatchPhaseGameplayData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYMatchPhaseDirectorComponent* FindMatchPhaseDirector(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYMatchPhaseGameplayRow FindCurrentMatchPhaseGameplayData(UObject* contextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRep_CurrentMatchPhaseData();
    
};

