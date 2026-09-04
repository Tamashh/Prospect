#pragma once
#include "CoreMinimal.h"
#include "FYNewsItemUIButtonActionType.generated.h"

UENUM(BlueprintType)
enum class FYNewsItemUIButtonActionType : uint8 {
    None,
    CloseNewsScreen,
    NextNewsItem,
    Continue,
    GoToPlayScreen,
    GoToRealMoneyShop,
    GoToShopOffer,
    GoToFortunaPass,
    GoToFortunaPassLevel,
    GoToFortunaPassBuyScreen,
    GoToInventoryScreen,
    GoToSettingsMenu,
    GoToSettingsMenuTab,
    GoToURL,
};

