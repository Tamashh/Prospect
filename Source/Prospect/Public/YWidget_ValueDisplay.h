#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Styling/SlateColor.h"
#include "YWidget_ValueDisplay.generated.h"

class UTextBlock;
class UYWidget_ImageBase;
class UYWidget_ValueDisplay;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ValueDisplay : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueStateDelegate, UYWidget_ValueDisplay*, valueWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_positiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_negativeColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_hasValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_imageWidget;
    
public:
    UYWidget_ValueDisplay();

    UFUNCTION(BlueprintCallable)
    void ShowPositive(bool isPositive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTogglePositive(const bool isPositive);
    
};

