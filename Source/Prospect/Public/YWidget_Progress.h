#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Progress.generated.h"

class UImage;
class UProgressBar;
class UTextBlock;
class UYProgressComponent;
class UYProgressDisplayComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Progress : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_infoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYProgressComponent* m_progressToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYProgressDisplayComponent* m_hudProgressComponent;
    
public:
    UYWidget_Progress();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayProgressRequest(UYProgressComponent* currentProgress);
    
};

