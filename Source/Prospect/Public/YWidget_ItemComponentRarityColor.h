#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "OnItemRarityColorSetDelegate.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentRarityColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentRarityColor : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRarityColorSet OnItemRarityColorSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_rarityColor;
    
public:
    UYWidget_ItemComponentRarityColor();

};

