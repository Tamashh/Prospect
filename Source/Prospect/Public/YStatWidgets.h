#pragma once
#include "CoreMinimal.h"
#include "YStatWidgets.generated.h"

class UYWidget;

USTRUCT(BlueprintType)
struct FYStatWidgets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget*> m_widgets;
    
    PROSPECT_API FYStatWidgets();
};

