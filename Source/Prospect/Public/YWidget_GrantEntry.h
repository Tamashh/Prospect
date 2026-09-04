#pragma once
#include "CoreMinimal.h"
#include "EYGrantType.h"
#include "YWidget.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_GrantEntry.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_GrantEntry : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    UYWidget_GrantEntry();

    UFUNCTION(BlueprintCallable)
    void SetupFromData(const TArray<FString>& grantIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemWidget(EYGrantType grantType, const FString& grantRowId, int32 currentGrantEntryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearWidget();
    

    // Fix for true pure virtual functions not being implemented
};

