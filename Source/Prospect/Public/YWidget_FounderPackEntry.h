#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_FounderPackEntry.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_FounderPackEntry : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_founderPackRowHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_offerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemContainer;
    
public:
    UYWidget_FounderPackEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPackAsUnavailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPackAsOwned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPackAsNotOwned();
    
};

