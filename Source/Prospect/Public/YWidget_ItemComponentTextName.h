#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextName : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemComponentTextSet, const FText&, ItemName, EYItemRarityType, itemRarity);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemComponentTextSet OnComponentTextSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useRarityColor;
    
public:
    UYWidget_ItemComponentTextName();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetTextName(const FText& ItemName, EYItemRarityType itemRarity);
    
};

