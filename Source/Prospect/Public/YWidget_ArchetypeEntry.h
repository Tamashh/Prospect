#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ArchetypeEntry.generated.h"

class UYWidget_ArchetypeEntry;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ArchetypeEntry : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ArchetypeEntry*, Widget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClickedSignature OnItemClicked;
    
    UYWidget_ArchetypeEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelected(bool IsSelected);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

