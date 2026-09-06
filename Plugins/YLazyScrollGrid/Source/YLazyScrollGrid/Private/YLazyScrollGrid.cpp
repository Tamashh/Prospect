#include "YLazyScrollGrid.h"
#include "Templates/SubclassOf.h"

UYLazyScrollGrid::UYLazyScrollGrid() : UUserWidget(FObjectInitializer::Get()) {
    this->m_scrollBox = NULL;
    this->m_gridItemContainer = NULL;
    this->m_parentClipperWidget = NULL;
}

void UYLazyScrollGrid::OnUserScrolled(float CurrentOffset) {
}

void UYLazyScrollGrid::InitializeInConstruct(UWidget* parentClipperWidget, TSubclassOf<UUserWidget> gridItemClass, int32 numberToReserve) {
}
