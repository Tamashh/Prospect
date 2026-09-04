#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YInteractionUpdateData.h"
#include "YWidget_Interaction.generated.h"

class UImage;
class UYObjectInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Interaction : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_progressBarXHair;
    
    UYWidget_Interaction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionUpdate(const FYInteractionUpdateData& interactionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ObjectInteractedWith(UYObjectInteractionComponent* objectInteractionComponent);
    
};

