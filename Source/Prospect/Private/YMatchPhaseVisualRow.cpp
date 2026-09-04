#include "YMatchPhaseVisualRow.h"

FYMatchPhaseVisualRow::FYMatchPhaseVisualRow() {
    this->m_blendingDuration = 0.0f;
    this->m_normalizedWindIntensity = 0.0f;
    this->m_exponentialHeightFog_FogDensity = 0.0f;
    this->m_exponentialHeightFog_MaxOpacity = 0.0f;
    this->m_exponentialHeightFog_ExtinctionScale = 0.0f;
    this->m_exponentialHeightFog_HeightFalloff = 0.0f;
    this->m_directionalLight_Intensity = 0.0f;
    this->m_directionalLight_BloomScale = 0.0f;
    this->m_directionalLight_SourceSoftAngle = 0.0f;
    this->m_skyLight_Intensity = 0.0f;
    this->m_skyLight_OcclusionExponent = 0.0f;
    this->m_skyLight_Cubemap = NULL;
    this->m_skyAtmosphere_MieScatteringScale = 0.0f;
    this->m_skyAtmosphere_HeightFogContribution = 0.0f;
    this->m_postProcess_ColorGradingLUTIntensity = 0.0f;
    this->m_postProcess_GrainIntensity = 0.0f;
    this->m_postProcess_LensFlareIntensity = 0.0f;
    this->m_postProcess_ExposureCompensation = 0.0f;
    this->m_postProcess_ExposureMinBrightness = 0.0f;
    this->m_postProcess_ExposureMaxBrightness = 0.0f;
    this->m_postProcess_BloomIntensity = 0.0f;
    this->m_postProcess_ChromaticAberrationIntensity = 0.0f;
    this->m_postProcess_AmbientCubemap = NULL;
    this->m_postProcess_AmbientCubemapIntensity = 0.0f;
    this->m_cloudManager_CloudAnim = 0.0f;
    this->m_cloudManager_LightningAmount = 0.0f;
    this->m_rainManager_NormalizedRainAmount = 0.0f;
    this->m_rainManager_Opacity = 0.0f;
    this->m_stormAmbientManager_NormalizedAtmosphereSpawnRate = 0.0f;
    this->m_stormAmbientManager_NormalizedDebrisSpawnRate = 0.0f;
    this->m_stormLightning_DistantLightningSpawnRate = 0.0f;
    this->m_mpc_normalizedStormIntensity = 0.0f;
    this->m_mpc_normalizedStormEmissiveIntensity = 0.0f;
    this->m_mpc_normalizedWetnessAmount = 0.0f;
    this->m_mpc_skyBackgroundObjectsOpacity = 0.0f;
    this->m_mpc_globalTimeMultiplier = 0.0f;
}

