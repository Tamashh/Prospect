#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidgetContainer.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetContainer : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_rootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_backgroundLayerPanel;
    
    UYWidgetContainer();

};

