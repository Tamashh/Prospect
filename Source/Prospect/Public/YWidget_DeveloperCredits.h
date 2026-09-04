#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YDeveloperCreditsCategoriesDataTableRow.h"
#include "YWidget_DeveloperCredits.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_DeveloperCredits : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* m_creditsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scrollingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fastScrollingMultiplier;
    
public:
    UYWidget_DeveloperCredits();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FillEndPlaceholder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CreateAndAddDeveloperCreditsEntry(const FYDeveloperCreditsCategoriesDataTableRow& developerCreditsCategoryRow);
    
};

