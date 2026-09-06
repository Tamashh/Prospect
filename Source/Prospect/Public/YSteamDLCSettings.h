#pragma once
#include "CoreMinimal.h"
#include "YSteamDLCSettings.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYSteamDLCSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLC1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLC2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLC3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLC4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLCPrimeTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLCHowlerTamer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLCVividPartyStyle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDiscountedPriceDLCAuthorityPeacekeeper;

    FYSteamDLCSettings();
};

