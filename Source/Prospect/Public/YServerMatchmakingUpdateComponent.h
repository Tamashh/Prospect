#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YConditions.h"
#include "YServerMatchmakingUpdateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYServerMatchmakingUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYConditions m_conditionsToJoinMatch;
    
public:
    UYServerMatchmakingUpdateComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryExecuteUsersTimeoutCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnTimerHeartbeat();
    
    UFUNCTION(BlueprintCallable)
    void OnServerIsAboutToShutdown();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayFabLoginComplete(bool isSuccess, const FString& loginError, const FString& playfabTitleId);
    
};

