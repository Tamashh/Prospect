#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYButtonsLayout.h"
#include "YWidget.h"
#include "YWidget_ModalDialogOkCancel.generated.h"

class UButton;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SCREENSYSTEM_API UYWidget_ModalDialogOkCancel : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeclined);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAccepted);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_msgHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_msgRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_okButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_cancelButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_okButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_cancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateOut;
    
public:
    UYWidget_ModalDialogOkCancel();

    UFUNCTION(BlueprintCallable)
    void OnOKButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCurrencyType(int32 buttonCurrencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetButtonsLayout(EYButtonsLayout layout);
    
};

