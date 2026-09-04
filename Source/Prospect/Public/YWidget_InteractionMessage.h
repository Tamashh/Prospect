#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_InteractionMessage.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_InteractionMessage : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_interactionMessage;
    
public:
    UYWidget_InteractionMessage();

};

