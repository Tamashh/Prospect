#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ProgressBarWithDelta.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ProgressBarWithDelta : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_deltaProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_step;
    
    UYWidget_ProgressBarWithDelta();

};

