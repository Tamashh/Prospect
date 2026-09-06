#pragma once
#include "CoreMinimal.h"
#include "YStationServerCommandResult.h"
#include "UObject/Object.h"
#include "OnPlayedMultiplayerMatchStateChangedDelegate.h"
#include "YGameSessionManager.generated.h"

UCLASS(Blueprintable)
class UYGameSessionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayedMultiplayerMatchStateChanged OnPlayedMultiplayerStateChanged;
    
    UYGameSessionManager();

    UFUNCTION(BlueprintCallable)
    void SessionInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnStationShutdownRequest(const FYStationServerCommandResult& Result) const;
    
    UFUNCTION(BlueprintCallable)
    void OnExecutionTimerTimeout() const;
    
};

