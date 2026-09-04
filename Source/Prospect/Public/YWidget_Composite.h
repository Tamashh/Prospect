#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Composite.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Composite : public UYWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_registeredName;
    
public:
    UYWidget_Composite();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRegisteredName() const;
    
};

