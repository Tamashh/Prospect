#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HorizonTweenEventParameters.h"
#include "OnHorizonTweenEventDelegate.h"
#include "HorizonTweenEvent.generated.h"

class AHorizonTweenSystem;

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenEvent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonTweenEvent OnTweenStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonTweenEvent OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonTweenEvent OnTweenLoop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonTweenEvent OnTweenFinished;
    
    UHorizonTweenEvent();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetFreeze(bool B);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    bool IsFreeze();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHorizonTweenSystem* GetTweenSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventParameters GetTweenEventParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentNumOfLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAlpha();
    
    UFUNCTION(BlueprintCallable)
    void Finish(bool bTweenToEnd);
    
};

