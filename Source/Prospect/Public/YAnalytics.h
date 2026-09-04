#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YBaseAnalyticsEvent.h"
#include "YAnalytics.generated.h"

class UYAnalytics;
class UYAnalyticsSender;

UCLASS(Blueprintable)
class UYAnalytics : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sampleBIEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAnalyticsSender* m_analyticsSender;
    
public:
    UYAnalytics();

    UFUNCTION(BlueprintCallable)
    void SetAnalyticsContextData(const FString& UserId, const FString& GameMode) const;
    
    UFUNCTION(BlueprintCallable)
    void OnLoginSucceeded();
    
    UFUNCTION(BlueprintCallable)
    static UYAnalytics* Get(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SendAnalyticsNoPlayer(const FString& EventName, const FYBaseAnalyticsEvent& anyAnalyticsStruct);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SendAnalytics(const FUniqueNetIdRepl& PlayerId, const FString& EventName, const FYBaseAnalyticsEvent& anyAnalyticsStruct);
    
};

