#pragma once
#include "CoreMinimal.h"
#include "YWidget_ModalDialogOkCancel.h"
#include "YWidget_ModalDialogOKCancelItem.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ModalDialogOKCancelItem : public UYWidget_ModalDialogOkCancel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemWidget;
    
public:
    UYWidget_ModalDialogOKCancelItem();

};

