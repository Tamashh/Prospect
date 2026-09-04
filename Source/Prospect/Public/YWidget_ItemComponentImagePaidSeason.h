#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImagePaidSeason.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImagePaidSeason : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentImagePaidSeason();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsPartOfPaidSeasonPass(const bool isPartOfPaidSeasonPass);
    
};

