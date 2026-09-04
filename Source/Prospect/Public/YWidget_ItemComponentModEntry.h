#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentModEntry.generated.h"

class UTextBlock;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentModEntry : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnModSelectedSignature, UYWidget_ItemContainer*, parentItemContainer, EYModificationSlotType, modSlotType, int32, modSlotIdx);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModSelectedSignature OnModSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_setItemContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_emptyItemContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_modTypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYModificationSlotType m_modType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_modSlotIdx;
    
public:
    UYWidget_ItemComponentModEntry();

private:
    UFUNCTION(BlueprintCallable)
    void HandleInternalItemClicked(UYWidget_ItemContainer* itemWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
};

