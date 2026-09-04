#pragma once
#include "CoreMinimal.h"
#include "YRoomPlayer.h"
#include "YRoomSquad.h"
#include "YGameSession_Base.h"
#include "YGameSession_Match.generated.h"

UCLASS(Blueprintable)
class AYGameSession_Match : public AYGameSession_Base {
    GENERATED_BODY()
public:
    AYGameSession_Match(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRoomSquadsUpdated(const TArray<FYRoomSquad>& squads) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRoomPlayersUpdated(const TArray<FYRoomPlayer>& Players);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeRoomPlayers(const TArray<FYRoomPlayer>& Players) const;
    
    UFUNCTION(BlueprintCallable)
    void OnInitializePlayerInternal(const TArray<FString>& userIds) const;
    
};

