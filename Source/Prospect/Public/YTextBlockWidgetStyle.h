#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "Styling/SlateTypes.h"
#include "YTextBlockWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UYTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle m_textBlockStyle;
    
    UYTextBlockWidgetStyle();

};

