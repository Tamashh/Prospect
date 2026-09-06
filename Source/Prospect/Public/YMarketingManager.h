#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYRegistrationResult.h"
#include "EYRegistrationStatus.h"
#include "YAzureFunctionResult.h"
#include "YMarketingManager.generated.h"

class UYMarketingManager;

UCLASS(Blueprintable)
class UYMarketingManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegistrationStatusChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegistrationResult, EYRegistrationResult, Result);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegistrationResult OnRegistrationResult;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegistrationStatusChanged OnRegistrationStatusChanged;

    UYMarketingManager();

    UFUNCTION(BlueprintCallable)
    static void RegisterForMarketing(const UObject* objectContext, const FString& Email, const FString& Locale);

private:
    UFUNCTION(BlueprintCallable)
    void OnRegisterForMarketingResponse(const FYAzureFunctionResult& azureResult);

    UFUNCTION(BlueprintCallable)
    void OnGetRegistrationStatusResponse(const FYAzureFunctionResult& azureResult);

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYRegistrationStatus GetRegistrationStatus(const UObject* objectContext);

    UFUNCTION(BlueprintCallable)
    static UYMarketingManager* GetMarketingManager(const UObject* objectContext);
    
};

