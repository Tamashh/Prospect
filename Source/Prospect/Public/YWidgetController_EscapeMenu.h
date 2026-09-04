#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "EscMenuButtonData.h"
#include "YWidgetController_EscapeMenu.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_EscapeMenu : public UYWidgetController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEscMenuButtonData> m_menuOptions;
    
    UYWidgetController_EscapeMenu();

};

