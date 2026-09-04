#include "YMenuCameraCustomizationCategoryAssociation.h"

FYMenuCameraCustomizationCategoryAssociation::FYMenuCameraCustomizationCategoryAssociation() {
    this->m_category = EYCustomizationCategory::Invalid;
    this->m_cameraActor = NULL;
    this->m_pointOfInterest = NULL;
    this->m_angleRestriction = 0.0f;
    this->m_blendTime = 0.0f;
    this->m_allowYawRotation = false;
    this->m_allowPitchRotation = false;
    this->m_visualizationIntention = EYCameraIntentionType::None;
    this->m_distanceType = EYCameraDistanceType::None;
}

