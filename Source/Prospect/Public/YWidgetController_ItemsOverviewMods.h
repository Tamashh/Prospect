#pragma once
#include "CoreMinimal.h"
#include "YWidgetController_ItemsOverview.h"
#include "YWidgetController_ItemsOverviewMods.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable)
class UYWidgetController_ItemsOverviewMods : public UYWidgetController_ItemsOverview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_cachedItemContainerToMod;
    
public:
    UYWidgetController_ItemsOverviewMods();

};

