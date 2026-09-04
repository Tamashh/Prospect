#pragma once
#include "CoreMinimal.h"
#include "YWidgetView.h"
#include "YWidgetView_StationHUD.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView_StationHUD : public UYWidgetView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_popUpCanvasPanel;
    
public:
    UYWidgetView_StationHUD();

};

