#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ProgressBar.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ProgressBar : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBarMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBarDelta;
    
    UYWidget_ProgressBar();

};

