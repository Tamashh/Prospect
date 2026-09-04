#include "YDataTableExternalFunctions.h"

UYDataTableExternalFunctions::UYDataTableExternalFunctions() {
}

bool UYDataTableExternalFunctions::TryFindPlayerTuningRow(FYPlayerTuningDataTableRow& tuningRow) {
    return false;
}

FString UYDataTableExternalFunctions::ToDebugString(FDataTableRowHandle rowHandle) {
    return TEXT("");
}

bool UYDataTableExternalFunctions::IsDataTableRowHandleValid(FDataTableRowHandle rowHandle) {
    return false;
}

bool UYDataTableExternalFunctions::IsDatatableOfStructType_PlayerAwarenessNotification(UDataTable* DataTable) {
    return false;
}

bool UYDataTableExternalFunctions::IsDatatableOfStructType_CommWheel(UDataTable* DataTable) {
    return false;
}

void UYDataTableExternalFunctions::FindHealtBarDeltaTuning(FYPlayerUIHealthBarDeltaSettings& healtBarDeltaTuning) {
}

bool UYDataTableExternalFunctions::FindGameModeTuningRow(const UObject* WorldContextObject, FYGameModeTuning& row) {
    return false;
}

void UYDataTableExternalFunctions::FindAudioSettingsRow(FYAudioSettingsRow& row) {
}

bool UYDataTableExternalFunctions::AreRowHandlesEqual(FDataTableRowHandle A, FDataTableRowHandle B) {
    return false;
}


