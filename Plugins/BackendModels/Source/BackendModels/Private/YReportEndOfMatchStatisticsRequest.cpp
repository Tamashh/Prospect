#include "YReportEndOfMatchStatisticsRequest.h"

FYReportEndOfMatchStatisticsRequest::FYReportEndOfMatchStatisticsRequest() {
    this->Outcome = EYMatchOutcome::NONE;
    this->killsPlayers = 0;
    this->killsCreatures = 0;
    this->damagePlayers = 0;
    this->damageCreatures = 0;
    this->matchDurationMinutes = 0;
}

