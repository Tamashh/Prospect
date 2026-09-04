#pragma once
#include "CoreMinimal.h"
#include "TestState2.h"
#include "TestScreen2.generated.h"

class UYWidget_MenuTestRootWidget;

UCLASS(Blueprintable)
class UTestScreen2 : public UTestState2 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_MenuTestRootWidget> m_widgetBp;
    
public:
    UTestScreen2();

};

