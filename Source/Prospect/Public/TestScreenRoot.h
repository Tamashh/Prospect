#pragma once
#include "CoreMinimal.h"
#include "RootState.h"
#include "TestScreenRoot.generated.h"

class UYWidget_MenuTestRootWidget;

UCLASS(Blueprintable)
class UTestScreenRoot : public URootState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_MenuTestRootWidget> m_widgetBp;
    
public:
    UTestScreenRoot();

};

