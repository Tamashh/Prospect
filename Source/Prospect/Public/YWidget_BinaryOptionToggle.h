#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_BinaryOptionToggle.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_BinaryOptionToggle : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionSelected, int32, OptionIndex);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_leftOptionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_rightOptionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_leftOptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_leftOptionTextBlockSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_rightOptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_rightOptionTextBlockSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_leftOptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rightOptionText;
    
public:
    UYWidget_BinaryOptionToggle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SwitchToOptionIndex(int32 OptionIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BinaryOptionIndexSelected(int32 OptionIndex);
    
};

