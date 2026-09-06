#pragma once
#include "CoreMinimal.h"
#include "YCurrencyCapSetting.h"
#include "YDataTableRowBase.h"
#include "YCurrencySettingsRow.generated.h"

USTRUCT(BlueprintType)
struct FYCurrencySettingsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyCapSetting> m_currencyCap;

    PROSPECT_API FYCurrencySettingsRow();
};
