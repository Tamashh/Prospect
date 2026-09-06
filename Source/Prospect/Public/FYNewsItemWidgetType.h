#pragma once
#include "CoreMinimal.h"
#include "FYNewsItemWidgetType.generated.h"

UENUM(BlueprintType)
enum class FYNewsItemWidgetType : uint8 {
    Shop,
    Maintenance,
    CommunityNews,
    ShopOfferSmall,
    LoginBonus,
    NewsletterSignup,
};
