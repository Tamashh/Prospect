#include "OctreeRenderingComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UOctreeRenderingComponent::UOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bSelectable = false;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
    this->WireMaterial = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("WireMaterial"));
}


