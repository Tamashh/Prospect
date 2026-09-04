#include "YWidget_Map.h"

UYWidget_Map::UYWidget_Map() {
    this->m_levelTextureRender = NULL;
    this->m_minimapViewportSize = 3000.0f;
    this->m_fogOfWarUncoverSmoothEdge = 0.200000003f;
    this->m_playersSeeingRadius = 3000.0f;
    this->m_maximizedByDefault = false;
    this->m_orientationPictureVisible = true;
    this->m_allowUserInput = true;
    this->m_minimapMaterial = NULL;
    this->m_mapCanvas = NULL;
    this->m_projectionCanvas = NULL;
    this->m_fullscreenCanvas = NULL;
    this->m_mapBackground = NULL;
    this->m_imageOrientationIcon = NULL;
    this->m_hideCursor = true;
    this->m_isFogOfWarActive = true;
    this->m_cachedRotationAngle = 0.0f;
    this->m_fogOfWarMaskRenderTarget2D = NULL;
    this->m_fogOfWarDrawMaskMaterial = NULL;
    this->m_fogOfWarDrawMaskMaterialInstance = NULL;
    this->m_fogOfWarTextureMaterial = NULL;
    this->m_minimizedAutoZoomLevel = 1.0f;
    this->m_maximizedAutoZoomLevel = 1.0f;
    this->m_isMaximized = false;
    this->m_defaultMapMarkerType = NULL;
    this->m_widgetPool = NULL;
    this->m_levelTexture = NULL;
    this->m_borderIconOffsetFactor = 0.850000024f;
}

void UYWidget_Map::ToggleMaximize() {
}

void UYWidget_Map::ShowMaximizedMap(bool IsMaximized, bool animate) {
}

void UYWidget_Map::SetZoom(float zoom) {
}





