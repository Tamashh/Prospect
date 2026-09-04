#pragma once
#include "CoreMinimal.h"
#include "YPlayfabMessage.h"
#include "UObject/Object.h"
#include "YPlayfabAuthenticationContext.h"
#include "EYPlayfabMessageExecutionType.h"
#include "YPendingPlayfabMessage.h"
#include "YOnLoginCompletedDelegate.h"
#include "YPlayfabInstance.generated.h"

class UYPlayfabService;

UCLASS(Blueprintable)
class YPLAYFAB_API UYPlayfabInstance : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnPlayfabMessageProcessedSuccesfully);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnPlayfabMessageError, int32, httpErrorCode, const FString&, httpErrorMessage);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabAuthenticationContext m_authContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayfabMessage> m_completedMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayfabMessage> m_notifyMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYPendingPlayfabMessage> m_pendingMessages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLoginCompleted OnLoginCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UYPlayfabService*> m_serviceToExchange;
    
    UYPlayfabInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRequestPendingMessage(const FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestMessage(const FYPlayfabMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnPendingMessageRequestCompleted(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyMessage(const FYPlayfabMessage& Message);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMessageProcessedSuccessfullyCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnMessageErrorCallback(int32 httpErrorCode, const FString& errorMessage);
    
};

