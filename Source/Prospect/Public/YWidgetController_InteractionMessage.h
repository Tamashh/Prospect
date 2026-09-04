#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YInteractionUpdateData.h"
#include "YPlayerInteraction.h"
#include "YWidgetController_InteractionMessage.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_InteractionMessage : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_InteractionMessage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionUpdate(const FYInteractionUpdateData& interactionData);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDetected(const FYPlayerInteraction& interactionData, bool detected);
    
};

