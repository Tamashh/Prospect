#include "YScreenManager.h"
#include "Templates/SubclassOf.h"

UYScreenManager::UYScreenManager() {
}

UYScreenBase* UYScreenManager::RequestScreen(TSubclassOf<UYScreenBase> screenClass, bool clearRemainingScreen) {
    return NULL;
}


