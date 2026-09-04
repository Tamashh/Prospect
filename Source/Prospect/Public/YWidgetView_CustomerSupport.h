#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EYReportType.h"
#include "YPlayerReportResponseData_DEPRECATED.h"
#include "YPlayerReportSubmitData_DEPRECATED.h"
#include "YWidgetView.h"
#include "YWidgetView_CustomerSupport.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView_CustomerSupport : public UYWidgetView {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnRequestShowSupportDialog, FText, headline, FText, Message, FText, buttonText, EYReportType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerSubmitDataRequest, const FYPlayerReportSubmitData_DEPRECATED&, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClosePlayerSupportWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSubmitDataRequest DEPRECATED_OnSubmitSupportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestShowSupportDialog OnShowSupportDialogDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClosePlayerSupportWidget OnClosePlayerSupportWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleCustomerResponse;
    
public:
    UYWidgetView_CustomerSupport();

private:
    UFUNCTION(BlueprintCallable)
    void OnServerResponseData(const FYPlayerReportResponseData_DEPRECATED& responseData);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestTimeout();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DEPRECATED_RequestSubmitDataToCustomerService(const FYPlayerReportSubmitData_DEPRECATED& submitData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReportData(const FText& primary, const FText& secondary, bool success);
    
};

