#include "YWidget_LanguageSelection.h"

UYWidget_LanguageSelection::UYWidget_LanguageSelection() {
    this->m_applyCultureChanges = true;
    this->m_dropDownWBP = NULL;
}

void UYWidget_LanguageSelection::RestoreDefaultSelection() {
}

void UYWidget_LanguageSelection::HandleLanguageSelectionChange(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


