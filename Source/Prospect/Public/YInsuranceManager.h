#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGetErrorHandling.h"
#include "YOnClaimInsurancePayoutPackageDelegate.h"
#include "YOnCurrenciesAddedDelegate.h"
#include "YOnFetchInsuranceClaimsDelegate.h"
#include "YOnFetchInsuranceInvoiceDelegate.h"
#include "YOnInsuranceManagerRequestCompletedDelegate.h"
#include "YOnInsurancePayoutPackageVoidedDelegate.h"
#include "YInsuranceManager.generated.h"

class UYInsuranceManager;

UCLASS(Blueprintable)
class PROSPECT_API UYInsuranceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFetchInsuranceInvoice OnFetchInsuranceInvoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFetchInsuranceClaims OnFetchInsuranceClaims;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnClaimInsurancePayoutPackage OnClaimInsurancePayoutPackage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInsuranceManagerRequestCompleted OnClaimInsurancePayoutPackageCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInsurancePayoutPackageVoided OnInsurancePayoutPackageVoided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesAdded OnCurrenciesAdded;
    
    UYInsuranceManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYInsuranceManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
};

