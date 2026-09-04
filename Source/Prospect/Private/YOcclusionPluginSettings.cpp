#include "YOcclusionPluginSettings.h"

UYOcclusionPluginSettings::UYOcclusionPluginSettings() {
    this->m_occlusionEnabled = true;
    this->m_useDynamicOcclusion = true;
    this->m_usePhysmatStacking = true;
    this->m_optionalMaxPhysmatStackCount = 1;
    this->m_audioSize = 0.0f;
    this->m_maxDistanceBetweenTraces = 0.0f;
    this->m_occlusionMinDistance = 0.0f;
    this->m_occlusionMaxDistance = 100000.0f;
    this->m_interpolationTime = 0.0f;
    this->m_traceDirectionCount = 4;
    this->m_occlusionTraceChannel = ECC_WorldStatic;
    this->m_centerLineTraceWeight = 0.0f;
    this->m_occlusionUseComplexCollision = false;
}


