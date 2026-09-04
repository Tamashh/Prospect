#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YInstanceSessionReconnectionManager.generated.h"

class AGameModeBase;

UCLASS(Blueprintable)
class UYInstanceSessionReconnectionManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYSessionDataUpdated);
    
    UYInstanceSessionReconnectionManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNewUserJoined(AGameModeBase* GameMode, const FUniqueNetIdRepl& UserId, FString& errorMessage);
    
};

