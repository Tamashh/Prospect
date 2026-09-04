#include "YKeybindingsFunctions.h"

UYKeybindingsFunctions::UYKeybindingsFunctions() {
}

UYKeybindingsModel* UYKeybindingsFunctions::TryFindKeybindingsModel(const UObject* objCtx) {
    return NULL;
}

void UYKeybindingsFunctions::SetKeyForInputBinding(const UObject* objCtx, const FName& ActionName, const FInputChord& InputChord, EYInputKeybindingType keybindingType) {
}

bool UYKeybindingsFunctions::IsUsingController(const UObject* objCtx) {
    return false;
}

bool UYKeybindingsFunctions::GetKeyForInputBindingName(const UObject* objCtx, FName inputBindingName, FInputActionKeyMapping& InputActionKeyMapping) {
    return false;
}

bool UYKeybindingsFunctions::GetKeybindingIconRowFromKey(const UObject* objCtx, const FKey& Key, TSoftObjectPtr<UTexture2D>& Icon) {
    return false;
}

bool UYKeybindingsFunctions::DoesCustomInputIniExist() {
    return false;
}


