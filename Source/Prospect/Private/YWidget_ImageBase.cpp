#include "YWidget_ImageBase.h"

UYWidget_ImageBase::UYWidget_ImageBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_loadingIndicator = NULL;
    this->m_loadingIndicatorVisible = true;
    this->m_material = NULL;
    this->m_image = NULL;
}

void UYWidget_ImageBase::SetPreloadedTexture(UTexture2D* Texture) {
}

void UYWidget_ImageBase::SetImage(TSoftObjectPtr<UTexture2D> Texture, UMaterialInterface* Material) {
}


