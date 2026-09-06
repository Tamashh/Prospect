#include "YTestConfigClass.h"

UYTestConfigClass::UYTestConfigClass() {
    this->m_dataTableFolderPath = TEXT("Content/DataTables");
    this->m_weaponTransportDataTablePath = TEXT("/Game/DataTables/PRO_Transport.PRO_Transport");
    this->m_weaponImpactDataTablePath = TEXT("/Game/DataTables/PRO_Impact.PRO_Impact");
    this->m_testWeaponRow = TEXT("WP_AUTOMATED_TEST_ROW_01");
    this->m_secondTestWeaponRow = TEXT("WP_AUTOMATED_TEST_ROW_02");
    this->m_playerTuningDataTablePath = TEXT("/Game/DataTables/PlayerTuning_DT.PlayerTuning_DT");
    this->m_playerAudioDataTablePath = TEXT("/Game/DataTables/Audio/PlayerAudio_DT.PlayerAudio_DT");
    this->m_voiceoverDatatablePath = TEXT("/Game/DataTables/Audio/VO_DT.VO_DT");
    this->m_voiceoverSpeakerDatatablePath = TEXT("/Game/DataTables/Audio/VO_Speakers_DT.VO_Speakers_DT");
    this->m_weaponAudioDataTablePath = TEXT("/Game/DataTables/Audio/WeaponAudio_DT.WeaponAudio_DT");
    this->m_meleeWeaponAudioDataTablePath = TEXT("/Game/DataTables/Audio/MeleeWeaponAudio_DT.MeleeWeaponAudio_DT");
    this->m_healthDataTablePath = TEXT("'/Game/DataTables/PRO_Health.PRO_Health'");
    this->m_abilityDataTablePath = TEXT("/Game/DataTables/Items/PRO_Abilities.PRO_Abilities");
    this->m_abilityDataTableRowOne = TEXT("AB_AUTOMATED_TEST_ROW_01");
    this->m_abilityDataTableRowTwo = TEXT("AB_AUTOMATED_TEST_ROW_02");
    this->m_activityTuningDataTablePath = TEXT("/Game/DataTables/ActivityTuning_DT.ActivityTuning_DT");
    this->m_activitySetsTablePath = TEXT("DataTable'/Game/DataTables/Activity/ActivitySets_Main_DT.ActivitySets_Main_DT'");
    this->m_abilityRowNameBombardment = TEXT("Bombardment");
    this->m_abilityRowNameBlink = TEXT("BlinkDagger");
}


