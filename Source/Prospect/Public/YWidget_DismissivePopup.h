#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_DismissivePopup.generated.h"

class UCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_DismissivePopup : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopUpDismissed, const FName&, popUpId);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* m_dontShowAgainCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BITimeWhenShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateOut;
    
public:
    UYWidget_DismissivePopup();

protected:
    UFUNCTION(BlueprintCallable)
    static void SetupToGoToFoundersPacks();
    
    UFUNCTION(BlueprintCallable)
    void ClosePopup(bool willScreenChange, const FName sceneRowName);
    
    UFUNCTION(BlueprintCallable)
    void CloseAndDismissPopup(bool willScreenChange, const FName sceneRowName);
    
};

