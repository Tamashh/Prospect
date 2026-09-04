#pragma once
#include "CoreMinimal.h"
#include "EYEndOfMatchWidgetType.h"
#include "Templates/SubclassOf.h"
#include "YDataTableRowBase.h"
#include "YEndOfMatchStateRow.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FYEndOfMatchStateRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_matchStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEndOfMatchWidgetType m_widgetType;
    
    PROSPECT_API FYEndOfMatchStateRow();
};

