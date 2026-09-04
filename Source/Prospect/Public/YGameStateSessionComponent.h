#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EYSessionEventType.h"
#include "YOnSessionStateChangedDelegate.h"
#include "YGameStateSessionComponent.generated.h"

class AGameModeBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYGameStateSessionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSessionStateChanged OnSessionStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompletedStates, meta=(AllowPrivateAccess=true))
    TArray<EYSessionEventType> m_completedStates;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint64 m_startUtcTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 m_lastTimeUserConnectedUtcTime;
    
    UYGameStateSessionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TryGetBackendTitleData();
    
    UFUNCTION(BlueprintCallable)
    void OnUserConnected(AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& errorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompletedStates(TArray<EYSessionEventType> oldSessionTypes);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginResult(EYLoginResult Result);
    
};

