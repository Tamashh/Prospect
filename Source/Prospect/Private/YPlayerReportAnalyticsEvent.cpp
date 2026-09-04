#include "YPlayerReportAnalyticsEvent.h"

FYPlayerReportAnalyticsEvent::FYPlayerReportAnalyticsEvent() {
    this->killed_by_reported_user = 0;
    this->damaged_by_reported_user = 0;
    this->killed_reported_user = 0;
    this->damaged_to_reported_user = 0;
    this->proximity = 0;
    this->voip = 0;
}

