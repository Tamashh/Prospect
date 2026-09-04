#include "YEZProfileManager.h"

UYEZProfileManager::UYEZProfileManager() {
    this->m_uploadShare = TEXT("//fs/perf-data/");
    this->m_defaultEZProfileTime = 15.0f;
    this->m_defaultEZNetProfileTime = 15.0f;
}

bool UYEZProfileManager::StartEZProfile(const UObject* objCtx, UYEZProfileManager* Instance, const FYEzProfileInitializationData& initializationData) {
    return false;
}


