#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YWidgetProvider.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UYWidgetProvider : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDataChanged, const FName&, DataName, const FName&, dataType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDataChanged OnDataChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> m_playerController;
    
public:
    UYWidgetProvider();

    UFUNCTION(BlueprintCallable)
    void RefreshData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetEvent(FName DataName);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(APlayerController* PlayerController, const FString& callerContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastDataChanged(FName Data, FName dataType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetEvent(FName DataName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeProvider();
    
};

