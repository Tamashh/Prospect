#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerGameDataStateType.h"
#include "OnStateTypeChangedDelegate.h"
#include "YPlayerRuntimeScoreStateData.h"
#include "YPlayerGameDataComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerGameDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RuntimeScoreDataChanged, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerRuntimeScoreStateData> m_scoreData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateTypeChanged OnStateChanged;
    
    UYPlayerGameDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RuntimeScoreDataChanged(TArray<FYPlayerRuntimeScoreStateData> oldData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateDataChanged(TArray<FYPlayerRuntimeScoreStateData>& oldData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStateActive(EYPlayerGameDataStateType State, AActor* relevantActorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindScoreStateData(EYPlayerGameDataStateType State, AActor* relevantActorContext, FYPlayerRuntimeScoreStateData& outData);
    
    UFUNCTION(BlueprintCallable)
    void ClearScoreData(EYPlayerGameDataStateType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddScoreData(EYPlayerGameDataStateType Type, int32 newScore);
    
};

