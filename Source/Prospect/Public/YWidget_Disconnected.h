#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "YWidget.h"
#include "YWidget_Disconnected.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_Disconnected : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_errorTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle m_loginRetryTimerHandle;
    
public:
    UYWidget_Disconnected();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRetryTimer(FTimerHandle logTimerHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RetryLogin();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnrecoverableError();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitGame();
    
};

