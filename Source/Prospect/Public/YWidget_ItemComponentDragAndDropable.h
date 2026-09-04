#pragma once
#include "CoreMinimal.h"
#include "YOnMouseButtonDownDelegate.h"
#include "YOnMouseButtonReleasedDelegate.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentDragAndDropable.generated.h"

class UDragDropOperation;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentDragAndDropable : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMouseButtonDown OnMouseButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMouseButtonReleased OnMouseButtonReleased;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_image;
    
public:
    UYWidget_ItemComponentDragAndDropable();

    UFUNCTION(BlueprintCallable)
    void OnItemUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnItemHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDragDropOperation* BP_OnDragDetected();
    
};

