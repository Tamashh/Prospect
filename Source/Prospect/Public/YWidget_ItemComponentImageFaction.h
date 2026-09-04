#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImageFaction.generated.h"

class UYWidget_ImageBase;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImageFaction : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_factionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLargeIcon;
    
public:
    UYWidget_ItemComponentImageFaction();

};

