#pragma once
#include "CoreMinimal.h"
#include "YActorWidget.h"
#include "YActivityProgressActorWidget.generated.h"

class UEditableText;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UYActivityProgressActorWidget : public UYActorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* m_statusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBar;
    
public:
    UYActivityProgressActorWidget();

    UFUNCTION(BlueprintCallable)
    void ShowProgress(float progress);
    
    UFUNCTION(BlueprintCallable)
    void ShowMessage(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateUpdated(int32 newState);
    
};

