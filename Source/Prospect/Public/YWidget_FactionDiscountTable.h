#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_FactionDiscountTable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FactionDiscountTable : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showOnlyCurrentStandingDiscounts;
    
public:
    UYWidget_FactionDiscountTable();

    UFUNCTION(BlueprintCallable)
    void InitializeFactionDiscount(const FName& factionId);
    
};

