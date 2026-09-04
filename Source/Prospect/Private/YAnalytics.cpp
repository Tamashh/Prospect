#include "YAnalytics.h"
#include "YAnalyticsSender.h"

UYAnalytics::UYAnalytics() {
    this->m_sampleBIEvents = true;
    this->m_analyticsSender = CreateDefaultSubobject<UYAnalyticsSender>(TEXT("YAnalyticsSender_2147482642"));
}

void UYAnalytics::SetAnalyticsContextData(const FString& UserId, const FString& GameMode) const {
}

void UYAnalytics::OnLoginSucceeded() {
}

UYAnalytics* UYAnalytics::Get(const UObject* Context) {
    return NULL;
}

void UYAnalytics::BP_SendAnalyticsNoPlayer(const FString& EventName, const FYBaseAnalyticsEvent& anyAnalyticsStruct) {
}

void UYAnalytics::BP_SendAnalytics(const FUniqueNetIdRepl& PlayerId, const FString& EventName, const FYBaseAnalyticsEvent& anyAnalyticsStruct) {
}


