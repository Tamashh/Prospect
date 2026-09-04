#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YFortunaPassClaimedRewards.h"
#include "YOnFortunaPassModelUpdatedDelegate.h"
#include "YFortunaPassModel.generated.h"

class UYFortunaPassModel;

UCLASS(Blueprintable)
class UYFortunaPassModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassModelUpdated OnFortunaPassModelUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPremiumUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFortunaPassClaimedRewards m_claimedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_seasonXp;
    
public:
    UYFortunaPassModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYFortunaPassModel* FindFortunaPassModel(const UObject* objCtx);
    
};

