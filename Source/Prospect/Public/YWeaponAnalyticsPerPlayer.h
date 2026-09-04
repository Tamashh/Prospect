#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWeaponAnalyticsEvent.h"
#include "YWeaponAnalyticsPerPlayer.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponAnalyticsPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYWeaponAnalyticsEvent> m_weaponAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_previousEquippedWeapon;
    
    PROSPECT_API FYWeaponAnalyticsPerPlayer();
};

