#include "YKeybindingsModel.h"

UYKeybindingsModel::UYKeybindingsModel() {
    this->m_activeInputDevice = EYKeybindingInputDeviceType::Keyboard;
}

bool UYKeybindingsModel::HaveDefaultKeybindingsChanged() const {
    return false;
}

TArray<FYKeybindingData> UYKeybindingsModel::GetRemovedDefaultKeybindings() const {
    return TArray<FYKeybindingData>();
}

FYKeybindings UYKeybindingsModel::GetKeybindings() const {
    return FYKeybindings{};
}

bool UYKeybindingsModel::GetKeybindingForName(const FName& InputName, FYKeybindingData& keybinding) const {
    return false;
}

TArray<FYKeybindingData> UYKeybindingsModel::GetAddedDefaultKeybindings() const {
    return TArray<FYKeybindingData>();
}

EYKeybindingInputDeviceType UYKeybindingsModel::GetActiveInputDevice() const {
    return EYKeybindingInputDeviceType::None;
}


