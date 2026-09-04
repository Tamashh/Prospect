#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_SquadContainer.generated.h"

class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SquadContainer : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_squadVBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_squadName;
    
    UYWidget_SquadContainer();

};

