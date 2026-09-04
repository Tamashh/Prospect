#pragma once
#include "CoreMinimal.h"
#include "TestState1.h"
#include "TestScreen1.generated.h"

class UYWidget_MenuTestRootWidget;

UCLASS(Blueprintable)
class UTestScreen1 : public UTestState1 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_MenuTestRootWidget> m_widgetBp;
    
public:
    UTestScreen1();

};

