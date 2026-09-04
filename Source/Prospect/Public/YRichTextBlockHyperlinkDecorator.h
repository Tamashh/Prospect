#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "YRichTextBlockHyperlinkDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class UYRichTextBlockHyperlinkDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HyperlinkSet;
    
public:
    UYRichTextBlockHyperlinkDecorator();

};

