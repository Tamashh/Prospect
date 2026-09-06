#pragma once
#include "CoreMinimal.h"
#include "YFGamesightEvent.h"
#include "UObject/Object.h"
#include "YGamesightManager.generated.h"

class UYGamesightManager;

UCLASS(Blueprintable)
class PROSPECT_API UYGamesightManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ipAddress;

public:
    UYGamesightManager();

    UFUNCTION(BlueprintCallable)
    void SendEvent(FYFGamesightEvent gamesightEvent);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYGamesightManager* GetGamesightManager(const UObject* WorldContext, const FString& ctxStr);

};
