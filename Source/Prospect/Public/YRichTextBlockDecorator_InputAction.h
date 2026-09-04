#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "YRichTextBlockDecorator_InputAction.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable)
class UYRichTextBlockDecorator_InputAction : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_inputWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_defaultPadding;
    
    UYRichTextBlockDecorator_InputAction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitInputWidget(UUserWidget* Widget, FName Name, bool isLight);
    
};

