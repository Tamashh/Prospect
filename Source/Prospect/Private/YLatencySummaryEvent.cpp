#include "YLatencySummaryEvent.h"

FYLatencySummaryEvent::FYLatencySummaryEvent() {
    this->latency_average = 0;
    this->latency_quantile_25 = 0;
    this->latency_quantile_50 = 0;
    this->latency_quantile_75 = 0;
    this->latency_quantile_90 = 0;
    this->latency_quantile_95 = 0;
    this->latency_maximum = 0;
    this->ue4_ping_average = 0;
    this->ue4_ping_quantile_25 = 0;
    this->ue4_ping_quantile_50 = 0;
    this->ue4_ping_quantile_75 = 0;
    this->ue4_ping_quantile_90 = 0;
    this->ue4_ping_quantile_95 = 0;
    this->ue4_ping_maximum = 0;
    this->inPacketsLost = 0.0f;
    this->outPacketsLost = 0.0f;
    this->InRate = 0;
    this->OutRate = 0;
    this->NetSaturated = 0.0f;
}

