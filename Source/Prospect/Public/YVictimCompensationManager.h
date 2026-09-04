#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGetErrorHandling.h"
#include "YOnFetchVictimCompensationPackagesDelegate.h"
#include "YOnRefreshedVictimCompensationPackagesDelegate.h"
#include "YOnVictimCompensationManagerRequestCompletedDelegate.h"
#include "YVictimCompensationManager.generated.h"

class UYVictimCompensationManager;

UCLASS(Blueprintable)
class PROSPECT_API UYVictimCompensationManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRefreshedVictimCompensationPackages OnRefreshedVictimCompensationPackages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFetchVictimCompensationPackages OnFetchVictimCompensationPackages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnVictimCompensationManagerRequestCompleted OnClaimVictimCompensationPackageCompleted;
    
    UYVictimCompensationManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYVictimCompensationManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
};

