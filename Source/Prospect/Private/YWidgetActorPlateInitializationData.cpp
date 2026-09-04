#include "YWidgetActorPlateInitializationData.h"

FYWidgetActorPlateInitializationData::FYWidgetActorPlateInitializationData() {
    this->m_maxRenderDistance = 0.0f;
    this->m_widgetScaleDistance = 0.0f;
    this->m_dotProduct = 0.0f;
    this->m_dotStartRangeDistanceScale = 0.0f;
    this->m_dotScalingDistancePerMeterMultiplier = 0.0f;
    this->m_dotMaxmimumThreshold = 0.0f;
    this->m_damageTakenVisibilityTime = 0.0f;
    this->m_forceNonVisibileDurationOnTeleport = 0.0f;
    this->m_minScaleValue = 0.0f;
    this->m_healthBarShowThreshold = 0.0f;
    this->m_alwaysShowLabel = false;
}

