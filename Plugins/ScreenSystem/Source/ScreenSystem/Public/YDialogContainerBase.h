#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YDialogContainerBase.generated.h"

class UYWidget_ModalDialogOkCancel;

UCLASS(Blueprintable, EditInlineNew)
class SCREENSYSTEM_API UYDialogContainerBase : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ModalDialogOkCancel* m_modalDialogOkCancel;
    
    UYDialogContainerBase();

};

