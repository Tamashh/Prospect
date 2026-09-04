#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_EomResultHeader.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EomResultHeader : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_localPlayerResultText;
    
    UYWidget_EomResultHeader();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateScoringResults(bool escaped, int32 totalVictoryPointsGained, int32 localPlayerPlacement, bool escapedFirst);
    
};

