#pragma once
#include "CoreMinimal.h"
#include "YInputStackInterface.h"
#include "YWidgetView.h"
#include "YWidgetView_Settings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView_Settings : public UYWidgetView, public IYInputStackInterface {
    GENERATED_BODY()
public:
    UYWidgetView_Settings();


    // Fix for true pure virtual functions not being implemented
};

