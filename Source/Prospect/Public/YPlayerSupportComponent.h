#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DEPRECATEDOnPLayerResponseDataDelegate.h"
#include "DEPRECATEDOnPlayerReportSentDelegate.h"
#include "OnPlayerReportResponseDelegate.h"
#include "OnPlayerReportSentDelegate.h"
#include "OnPlayerSupportActiveStateRequestDelegate.h"
#include "YPlayerReportSubmitData_DEPRECATED.h"
#include "YSendPlayerReportRequest.h"
#include "YPlayerSupportComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerSupportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDEPRECATEDOnPlayerReportSent DEPRECATED_OnSentPlayerReport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDEPRECATEDOnPLayerResponseData DEPRECATED_OnServerResponseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerReportSent OnPlayerReportSendEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerReportResponse OnPlayerReportResponseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSupportActiveStateRequest OnActiveStateRequestDelegate;
    
    UYPlayerSupportComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetupReportEndpoints();
    
    UFUNCTION(BlueprintCallable)
    void SendReportToZendesk();
    
    UFUNCTION(BlueprintCallable)
    void SendReportToBI();
    
    UFUNCTION(BlueprintCallable)
    void SendPlayerRequest(const FYSendPlayerReportRequest& Data, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    void ProcessCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeout();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCloseSupportWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBiReportSendCallback(bool success);
    
    UFUNCTION(BlueprintCallable)
    void FetchBattleLogInformation();
    
public:
    UFUNCTION(BlueprintCallable)
    void DEPRECATED_SendPlayerRequest(const FYPlayerReportSubmitData_DEPRECATED& requestData);
    
private:
    UFUNCTION(BlueprintCallable)
    void CleanUp();
    
};

