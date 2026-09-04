#pragma once
#include "CoreMinimal.h"
#include "YInputStackInterface.h"
#include "YWidgetView.h"
#include "YWidgetView_Options.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView_Options : public UYWidgetView, public IYInputStackInterface {
    GENERATED_BODY()
public:
    UYWidgetView_Options();


    // Fix for true pure virtual functions not being implemented
};

