#pragma once
#include "CoreMinimal.h"
#include "OnItemLostOnDeathSetDelegate.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentLostOnDeath.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentLostOnDeath : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemLostOnDeathSet OnItemLostOnDeathSet;
    
    UYWidget_ItemComponentLostOnDeath();

};

