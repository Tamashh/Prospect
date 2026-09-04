#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_NotificationNumber.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_NotificationNumber : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_value;
    
public:
    UYWidget_NotificationNumber();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetToDefault();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddValue(int32 addedValue);
    
};

