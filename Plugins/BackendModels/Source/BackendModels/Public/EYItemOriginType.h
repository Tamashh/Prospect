#pragma once
#include "CoreMinimal.h"
#include "EYItemOriginType.generated.h"

UENUM(BlueprintType)
enum class EYItemOriginType : uint8 {
    Undefined,
    CB1Migration,
    Contract,
    Craft,
    Creature,
    Debug,
    EntitlementsEGS,
    EntitlementsSteam,
    FTUE,
    FortunaPass,
    Generator,
    Insurance,
    ManualScript,
    MapContainerAlienForge,
    MapContainerLoot,
    MapPickupLoot,
    MatchSplitStack,
    MatchUnknown,
    PlayFabDashboard,
    PremiumShop,
    PurchaseICA,
    PurchaseKorolev,
    PurchaseOsiris,
    PurchaseQuickShop,
    Retention,
    SeasonWipe,
    StarterPack,
    StationSplitStack,
    TocMigration,
    TwitchDrop,
    Uplink,
    VictimCompensation,
    WeaponAttachment,
    Coupon,
};

