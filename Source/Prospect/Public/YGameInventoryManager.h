#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "UObject/Object.h"
#include "YOnLocalPlayerUpdatedCurrenciesSignatureDelegate.h"
#include "YGameInventoryManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGameInventoryManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLocalPlayerUpdatedCurrenciesSignature OnLocalPlayerCurrenciesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLocalPlayerUpdatedCurrenciesSignature OnCurrenciesUpdated;
    
    UYGameInventoryManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCurrenciesUpdated(const TArray<FYUserCurrenciesItems>& currencies, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCurrenciesAdded(const TArray<FYUserCurrenciesItems>& currencies, const FString& callerContext);
    
};

