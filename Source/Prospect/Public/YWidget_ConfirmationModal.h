#pragma once
#include "CoreMinimal.h"
#include "YWidget_Composite.h"
#include "YWidget_ConfirmationModal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ConfirmationModal : public UYWidget_Composite {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonSecondary);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonPrimary);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonPrimary OnButtonPrimary;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonSecondary OnButtonSecondary;
    
    UYWidget_ConfirmationModal();

    UFUNCTION(BlueprintCallable)
    void SetupBIData(const FString& primaryButtonName, const FString& buttonLocation, const FString& secondaryButtonName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupBIData(const FString& primaryButtonName, const FString& buttonLocation, const FString& secondaryButtonName);
    
};

