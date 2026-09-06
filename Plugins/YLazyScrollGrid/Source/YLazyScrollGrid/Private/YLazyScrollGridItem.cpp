#include "YLazyScrollGridItem.h"

FYLazyScrollGridItem::FYLazyScrollGridItem() {
    this->m_index = 0;
    this->m_isVisible = false;
    this->m_loadStatus = NotLoaded;
    this->m_wasLoadedOnce = false;
    this->m_widget = NULL;
    this->m_addedToGridContainer = false;
}
