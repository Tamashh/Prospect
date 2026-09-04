#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Authorization.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Authorization : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLegalAgreementsAccepted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLegalAgreementsAccepted OnLegalAgreementsAccepted;
    
    UYWidget_Authorization();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoginQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLegalAgreements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowDisconnect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptLegalAgreements();
    
};

