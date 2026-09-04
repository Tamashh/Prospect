#include "DA_Uplink.h"

UDA_Uplink::UDA_Uplink() {
    this->m_durationUpdateCommon = 0.0f;
    this->m_durationUpdateUnCommon = 0.0f;
    this->m_durationUpdateRare = 0.0f;
    this->m_durationUpdateEpic = 0.0f;
    this->m_uplinkSkeletalMesh = NULL;
    this->m_soundUpdateStart = NULL;
    this->m_soundUpdateInterupt = NULL;
    this->m_soundUpdateCompleted = NULL;
    this->m_soundUpdateWhile = NULL;
    this->m_soundPowerGain = NULL;
    this->m_soundPowerLoss = NULL;
    this->m_durationInteractConsole = 0.0f;
    this->m_consoleMesh = NULL;
    this->m_soundConsoleStartUpdate = NULL;
    this->m_soundConsoleInteruptUpdate = NULL;
    this->m_soundConsoleCompleteUpdate = NULL;
    this->m_soundConsolePowerGain = NULL;
    this->m_soundConsolePowerLoss = NULL;
    this->m_durationFuseBoxInteract = 0.0f;
    this->m_FuseBoxMesh = NULL;
    this->m_SoundEnable = NULL;
    this->m_SoundDisable = NULL;
}


