#include "YAMDFSRSettings.h"

UYAMDFSRSettings::UYAMDFSRSettings() {
    this->m_enableFSRIntegration = false;
    this->m_resolutionPercentageUltraQuality = 77.0f;
    this->m_resolutionPercentageQuality = 67.0f;
    this->m_resolutionPercentageBalanced = 59.0f;
    this->m_resolutionPercentagePerformance = 50.0f;
    this->m_resolutionPercentageHybridUltraQuality = 77.0f;
    this->m_resolutionPercentageHybridQuality = 67.0f;
    this->m_resolutionPercentageHybridBalanced = 59.0f;
    this->m_resolutionPercentageHybridPerformance = 50.0f;
    this->m_mipMapBiasUltraQuality = -0.37650001f;
    this->m_mipMapBiasQuality = -0.577099979f;
    this->m_mipMapBiasUltraBalanced = -0.790899992f;
    this->m_mipMapBiasPerformance = -1.0f;
}

bool UYAMDFSRSettings::IsFSRIntegrationEnabled() {
    return false;
}


