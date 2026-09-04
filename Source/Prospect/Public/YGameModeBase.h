#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EYSessionEventType.h"
#include "YPlayerSlot.h"
#include "YGameModeBase.generated.h"

class APlayerState;
class UYServerMatchmakingUpdateComponent;

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API AYGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableReplicationGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSlot> m_playerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_playerIdToSquadId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYServerMatchmakingUpdateComponent* m_serverMatchmakingUpdateComponent;
    
public:
    AYGameModeBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSpawned(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedSessionState(EYSessionEventType newState);
    
    UFUNCTION(BlueprintCallable)
    void DefaultTimer();
    
};

