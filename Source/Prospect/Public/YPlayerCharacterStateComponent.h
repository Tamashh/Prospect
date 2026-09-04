#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerStateBlueprint.h"
#include "YActivateStateBlueprintDelegate.h"
#include "YAnyStateActivatedDelegate.h"
#include "YAnyStateChangedDelegate.h"
#include "YAnyStateDeactivatedDelegate.h"
#include "YAuthorithyPlayerState.h"
#include "YDeActivateStateBlueprintDelegate.h"
#include "YOnAnyStateChangedWithCancelDelegate.h"
#include "YStateChangedData.h"
#include "YPlayerCharacterStateComponent.generated.h"

class AActor;
class UYEncumbranceEffects_DataAsset;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerCharacterStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnyStateDeactivated OnAnyStatesDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnyStateActivated OnAnyStatesActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnyStateChanged OnAnyStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnAnyStateChangedWithCancel OnAnyStateChangedWithCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bypassEncumbrance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AuthorithyPlayerState, meta=(AllowPrivateAccess=true))
    FYAuthorithyPlayerState m_playerStateAuthorithy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYEncumbranceEffects_DataAsset* m_encumbranceEffectDataAsset;
    
public:
    UYPlayerCharacterStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBypassEncumbrance() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearStates(const TArray<FYStateChangedData>& States, bool wasInterupted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearState(FYStateChangedData State, bool wasInterupted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerActivateNewState(FYStateChangedData State);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AuthorithyPlayerState(FYAuthorithyPlayerState oldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActiveBlueprint(EYPlayerStateBlueprint State);
    
    UFUNCTION(BlueprintCallable)
    int64 GetActiveStates();
    
    UFUNCTION(BlueprintCallable)
    static UYPlayerCharacterStateComponent* FindCharacterStateComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    void DeActivateStateDelegateBlueprint(EYPlayerStateBlueprint State, FYDeActivateStateBlueprint deactivateBinding);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateStateBlueprint(EYPlayerStateBlueprint State, bool replicateIfAutonomous, bool wasInterrupted, int64 eventCounter, bool fromReplication);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllStates();
    
    UFUNCTION(BlueprintCallable)
    void ActivateStateDelegateBlueprint(EYPlayerStateBlueprint State, FYActivateStateBlueprint activateBinding);
    
};

