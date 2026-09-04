#include "YScreenSystemRoot.h"

UYScreenSystemRoot::UYScreenSystemRoot() {
    this->m_widgetManager = NULL;
    this->m_screenManager = NULL;
    this->m_stateMachine = NULL;
    this->m_widgetRootContainer = NULL;
    this->m_dialogContainer = NULL;
    this->m_levelActorContainer = NULL;
}

UYWidgetRootContainer* UYScreenSystemRoot::GetWidgetContainer() const {
    return NULL;
}

UYHierarchicalStateMachine* UYScreenSystemRoot::GetStateMachine() const {
    return NULL;
}

UYLevelActorContainer* UYScreenSystemRoot::GetLevelActorContainer() const {
    return NULL;
}

UYDialogContainerBase* UYScreenSystemRoot::GetDialogContainer() const {
    return NULL;
}

void UYScreenSystemRoot::DispatchScreenCommand(UYScreenCommand* screenCommand) {
}


