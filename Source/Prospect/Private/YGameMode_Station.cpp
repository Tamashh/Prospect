#include "YGameMode_Station.h"
#include "YMissionGameManagerComponent.h"

AYGameMode_Station::AYGameMode_Station(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_missionManagerComponent = CreateDefaultSubobject<UYMissionGameManagerComponent>(TEXT("MissionGameManagerComponent"));
    this->m_timeUntilStationShutdownNoPlayers = 120.0f;
    this->m_timeUntilStationShutdown = 10800.0f;
    this->m_timeStampHadPlayers = -1.0f;
    this->m_requestedEnd = false;
}


