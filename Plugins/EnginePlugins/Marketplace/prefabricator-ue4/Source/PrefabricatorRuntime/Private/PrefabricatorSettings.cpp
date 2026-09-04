#include "PrefabricatorSettings.h"

UPrefabricatorSettings::UPrefabricatorSettings() {
    this->PivotPosition = EPrefabricatorPivotPosition::Center;
    this->bAllowDynamicUpdate = true;
    this->DefaultThumbnailPitch = -11.25f;
    this->DefaultThumbnailYaw = -157.5f;
    this->DefaultThumbnailZoom = 0.0f;
}


