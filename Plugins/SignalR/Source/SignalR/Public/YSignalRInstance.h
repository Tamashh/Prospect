#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YSignalRInstance.generated.h"

UCLASS(Blueprintable)
class SIGNALR_API UYSignalRInstance : public UObject {
    GENERATED_BODY()
public:
    UYSignalRInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnHandshakeReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectionError(const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectionClosedNotClean(const FString& Error);
    
};

