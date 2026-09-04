#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Types/SlateEnums.h"
#include "YWidget_LanguageSelection.generated.h"

class UYWidget_DropDown;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LanguageSelection : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLanguageSelectedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLanguageSelectedDelegate OnLanguageSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_applyCultureChanges;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_DropDown* m_dropDownWBP;
    
public:
    UYWidget_LanguageSelection();

    UFUNCTION(BlueprintCallable)
    void RestoreDefaultSelection();
    
    UFUNCTION(BlueprintCallable)
    void HandleLanguageSelectionChange(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

