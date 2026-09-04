#include "YWidget_ItemComponentImage.h"

UYWidget_ItemComponentImage::UYWidget_ItemComponentImage() {
    this->m_useLargeIcon = false;
    this->m_blueprintMaterial = NULL;
}

void UYWidget_ItemComponentImage::OnImageLoaded(TSoftObjectPtr<UTexture2D> Image) {
}



