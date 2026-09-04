#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Compass.generated.h"

class APawn;
class UCanvasPanel;
class UCanvasPanelSlot;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_Compass : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_movingCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_pawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* m_canvasSlot;
    
public:
    UYWidget_Compass();

};

