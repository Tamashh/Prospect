#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYAccountLinkingResultCode.h"
#include "YAccountLinkingManager.generated.h"

class UYAccountLinkingManager;

UCLASS(Blueprintable)
class YPLATFORMUTILS_API UYAccountLinkingManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAccountLinkingResultBI, const FString&, targetPlatformUserId, const FString&, targetUserIdPlayFabMaster, const EYAccountLinkingResultCode, resultCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccountLinkingResultAfterTimeout, const EYAccountLinkingResultCode, resultCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccountLinkingResult, const EYAccountLinkingResultCode, resultCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccountLinkingProcessUpdate, const bool, isInProcess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccountLinkingResult OnAccountLinkingResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccountLinkingResultAfterTimeout OnAccountLinkingResultAfterTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccountLinkingResultBI OnAccountLinkingResultBI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccountLinkingProcessUpdate OnAccountLinkingProcessUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_targetSubsystemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_targetPlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_targetPlatformUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_targetUserIdPlayFabMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sessionToken;
    
public:
    UYAccountLinkingManager();

    UFUNCTION(BlueprintCallable)
    void StartAccountLinking(const FName& selectedPlatform);
    
    UFUNCTION(BlueprintCallable)
    bool IsLinkingInProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeoutThreshold();
    
    UFUNCTION(BlueprintCallable)
    static UYAccountLinkingManager* GetAccountLinkingManager(const UObject* objectContext);
    
};

