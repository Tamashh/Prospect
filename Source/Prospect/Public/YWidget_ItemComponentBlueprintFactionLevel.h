#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentBlueprintFactionLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentBlueprintFactionLevel : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentBlueprintFactionLevel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(int32 factionLevel, bool isMissionBlueprint);
    
};

