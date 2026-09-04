#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YGrantsManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGrantsManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_claimingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_claimsPerRequest;
    
public:
    UYGrantsManager();

private:
    UFUNCTION(BlueprintCallable)
    void ClaimNextGrants();
    
};

