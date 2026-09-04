#include "YPlatformFunctions.h"

UYPlatformFunctions::UYPlatformFunctions() {
}

bool UYPlatformFunctions::IsPlatformOverlayEnabled(const UObject* objectContext) {
    return false;
}

EYGamePlatform UYPlatformFunctions::GetCurrentlyUsedPlatform(const UObject* objectContext) {
    return EYGamePlatform::NONE;
}


