#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYServicePingTypes.h"
#include "YGamePingEntry.h"
#include "YPingEndpointsCompleteDelegate.h"
#include "YGamePingManager.generated.h"

class UPingIP;

UCLASS(Blueprintable)
class UYGamePingManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGamePingEntry> m_pingEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYServicePingTypes> m_completedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeoutPingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAmountOfPingRetries;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPingEndpointsComplete OnPingTypeComplete;
    
    UYGamePingManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeoutPingType(EYServicePingTypes Type);
    
    UFUNCTION(BlueprintCallable)
    void OnStationPingReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnPingRegionSuccess(UPingIP* PingOperation, const FString& Hostname, int32 TimeMS);
    
    UFUNCTION(BlueprintCallable)
    void OnPingRegionFailure(UPingIP* PingOperation, const FString& Hostname);
    
};

