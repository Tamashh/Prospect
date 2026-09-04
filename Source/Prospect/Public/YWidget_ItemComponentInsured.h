#pragma once
#include "CoreMinimal.h"
#include "OnItemInsuredSetDelegate.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentInsured.generated.h"

class UYControllerInventoryInsuranceComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentInsured : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemInsuredSet OnItemInsuranceSet;
    
    UYWidget_ItemComponentInsured();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnInsuranceUpdated(UYControllerInventoryInsuranceComponent* insuranceComponent);
    
};

