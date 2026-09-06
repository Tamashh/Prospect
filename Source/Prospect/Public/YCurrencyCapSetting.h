#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCurrencyCapSetting.generated.h"

USTRUCT(BlueprintType)
struct FYCurrencyCapSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_currency;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currencyCap;

    PROSPECT_API FYCurrencyCapSetting();
};
