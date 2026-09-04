#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidgetRootContainer.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class SCREENSYSTEM_API UYWidgetRootContainer : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_rootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_backgroundPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCanvasPanel> m_subScreenPanel;
    
public:
    UYWidgetRootContainer();

    UFUNCTION(BlueprintCallable)
    void SetSubScreenPanel(UCanvasPanel* CanvasPanel);
    
    UFUNCTION(BlueprintCallable)
    UCanvasPanel* GetSubScreenPanel();
    
};

