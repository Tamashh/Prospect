#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextDescription.generated.h"

class UTextBlock;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemComponentTextDescription, FText, Description);

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextDescription : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FOnItemComponentTextDescription OnItemComponentTextDescription;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_descriptionText;
    
public:
    UYWidget_ItemComponentTextDescription();

};

