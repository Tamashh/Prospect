#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "EYMatchState.h"
#include "Templates/SubclassOf.h"
#include "YMatchScreenLobby.generated.h"

UCLASS(Blueprintable)
class UYMatchScreenLobby : public UYScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_hudMatchScreenClass;
    
public:
    UYMatchScreenLobby();

private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStateChanged(EYMatchState newState);
    
};

