#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnPingCompleteDelegate.h"
#include "OnPingFailureDelegate.h"
#include "PingIP.generated.h"

UCLASS(Blueprintable, Config=Game)
class PING_API UPingIP : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingComplete OnPingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingFailure OnPingFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetHost;
    
public:
    UPingIP();

    UFUNCTION(BlueprintCallable)
    void SendPing(const FString& inHostAdress);
    
};

