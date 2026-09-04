#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_AlivePlayers.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_AlivePlayers : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_alivePlayersText;
    
    UYWidget_AlivePlayers();

};

