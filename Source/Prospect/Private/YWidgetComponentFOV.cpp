#include "YWidgetComponentFOV.h"
#include "Materials/MaterialInterface.h"
#include "UObject/UObjectGlobals.h"

UYWidgetComponentFOV::UYWidgetComponentFOV(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TranslucentMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent"));
    this->TranslucentMaterial_OneSided = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided"));
    this->OpaqueMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque"));
    this->OpaqueMaterial_OneSided = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided"));
    this->MaskedMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked"));
    this->MaskedMaterial_OneSided = LoadObject<UMaterialInterface>(nullptr, TEXT("/Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided"));
    this->m_defaultFOV = 80.0f;
    this->m_nearClipDistance = 1.0f;
}


