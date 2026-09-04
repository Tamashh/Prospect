#include "YScreenBase.h"
#include "Templates/SubclassOf.h"

UYScreenBase::UYScreenBase() {
    this->m_screenWidgetClass = NULL;
    this->m_alternativeWidgetClass = NULL;
    this->m_screenWidgetInstance = NULL;
    this->m_screenSystemRoot = NULL;
    this->m_isSubScreen = false;
    this->m_clearWidgetOnExit = false;
    this->m_screenType = EYScreenType::None;
}

void UYScreenBase::RequestScreenPop() {
}

void UYScreenBase::RequestScreenChange(TSubclassOf<UYScreenBase> nextScreen, bool emptyScreenStack) {
}

AHUD* UYScreenBase::GetHUD() const {
    return NULL;
}



