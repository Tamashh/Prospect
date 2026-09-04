#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YPopupWidgetRow.generated.h"

class UYWidget_DismissivePopup;

USTRUCT(BlueprintType)
struct FYPopupWidgetRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_DismissivePopup> m_associatedWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_startDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_endDateTime;
    
    PROSPECT_API FYPopupWidgetRow();
};

