#include "YLevelScript.h"

AYLevelScript::AYLevelScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_minimapBackground = NULL;
    this->m_explicitCustomizationActor = NULL;
    this->m_playerCharacterCustomizationActor = NULL;
    this->m_intention = EYCameraIntentionType::All;
    this->m_activeScreen = EYScreenType::None;
    this->m_activeApperenceMenu = EYApperenceCategoriesTypes::Invalid;
}


void AYLevelScript::SetZoom(UObject* relevantObject, float zoom, int32 Handle) {
}

void AYLevelScript::SetMapTextureSize(UObject* relevantObject, const FVector& mapTextureSize, int32 Handle) {
}

void AYLevelScript::SetActiveCameraIntentionType(UObject* relevantObject, EYCameraIntentionType intentionType) {
}


void AYLevelScript::OnScreenTypeChangedCallback(EYScreenType screenType) {
}

void AYLevelScript::MatchEscapeSequenceCompleted(UYSpectateComponent* spectateComponent) {
}

FVector2D AYLevelScript::GetZoomedTextureSize(UObject* relevantObject, int32 Handle) {
    return FVector2D{};
}

float AYLevelScript::GetZoom(UObject* relevantObject, int32 Handle) {
    return 0.0f;
}

FVector2D AYLevelScript::GetMapTextureSize(UObject* relevantObject, int32 Handle) {
    return FVector2D{};
}

FYLevelMapRuntimeData AYLevelScript::GetMapRuntimeData(UObject* relevantObject, int32 Handle) {
    return FYLevelMapRuntimeData{};
}

AYLevelScript* AYLevelScript::FindLevelScript(UObject* relevantObject) {
    return NULL;
}

EYScreenType AYLevelScript::FindActiveScreen(UObject* objectContext) {
    return EYScreenType::None;
}

FVector2D AYLevelScript::ConvertWorldToMinimapCoordinate(UObject* relevantObject, FVector LevelCoordinate, int32 Handle) {
    return FVector2D{};
}

FVector AYLevelScript::ConvertMapCoordinateToWorld(UObject* relevantObject, FVector2D MapCoordinate, int32 Handle) {
    return FVector{};
}



