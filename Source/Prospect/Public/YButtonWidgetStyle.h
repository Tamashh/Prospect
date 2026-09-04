#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "YButtonAudio.h"
#include "YButtonWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UYButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle m_buttonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYButtonAudio m_widgetAudio;
    
    UYButtonWidgetStyle();

};

