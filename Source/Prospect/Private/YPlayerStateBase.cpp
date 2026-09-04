#include "YPlayerStateBase.h"
#include "YPlatformAnalyticsComponent.h"
#include "YPlayerBIDataComponent.h"
#include "YPlayerEOSStatsComponent.h"
#include "YPlayerStateInventoryComponent.h"
#include "YStateQuestComponent.h"

AYPlayerStateBase::AYPlayerStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerBIComponent = CreateDefaultSubobject<UYPlayerBIDataComponent>(TEXT("PlayerBIDataComponent"));
    this->m_platformAnalyticsComponent = CreateDefaultSubobject<UYPlatformAnalyticsComponent>(TEXT("YPlatformAnalyticsComponent"));
    this->m_stateInventoryComponent = CreateDefaultSubobject<UYPlayerStateInventoryComponent>(TEXT("PlayerStateInventoryComponent"));
    this->m_stateQuestComponent = CreateDefaultSubobject<UYStateQuestComponent>(TEXT("StateQuestComponent"));
    this->m_playerEOSStatsComponent = CreateDefaultSubobject<UYPlayerEOSStatsComponent>(TEXT("YPlayerEOSStatsComponent"));
    this->m_seeSeasonRewardPopup = false;
}

void AYPlayerStateBase::SetCanSeeSeasonRewardPopUp() {
}

UYPlayerEOSStatsComponent* AYPlayerStateBase::GetPlayerEOSStatsComponent() const {
    return NULL;
}

bool AYPlayerStateBase::CanSeeSeasonRewardPopUp() const {
    return false;
}


