#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDismissedSeasonPassPurchases.generated.h"

UCLASS(Blueprintable, Config=Game)
class PROSPECT_API UYDismissedSeasonPassPurchases : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_dismissedSeasonPassPurchases;
    
public:
    UYDismissedSeasonPassPurchases();

    UFUNCTION(BlueprintCallable)
    bool HasDismissedSeasonPassPurchase(const FString& unlocalizedSeasonName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddDismissedSeasonPassPurchase(const FString& unlocalizedSeasonName);
    
};

