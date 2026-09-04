#include "YInputKeySelector.h"

UYInputKeySelector::UYInputKeySelector() {
    this->EscapeKeys.AddDefaulted(1);
}

void UYInputKeySelector::HandleKeyUnassigned() {
}

void UYInputKeySelector::HandleKeySelected(const FInputChord& InSelectedKey) {
}


