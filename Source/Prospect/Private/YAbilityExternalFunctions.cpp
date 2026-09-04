#include "YAbilityExternalFunctions.h"

UYAbilityExternalFunctions::UYAbilityExternalFunctions() {
}

bool UYAbilityExternalFunctions::FindWeaponTuningData(FDataTableRowHandle weaponTransportRow, FYWeaponTuningDataTableRow& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindSpawnedDatatableRowHandleFromObject(UObject* relevantObject, FDataTableRowHandle& outRowHandle) {
    return false;
}

bool UYAbilityExternalFunctions::FindKineticShieldAbilityDataFromObject(UObject* relevantObject, FYAbilityActionKineticShieldData& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindHealWardAbilityDataFromObject(UObject* relevantObject, FYAbilityActionHealWardData& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindCloakAbilityDataFromObject(UObject* relevantObject, FYAbilityActionCloakData& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindBombardmentAbilityDataFromObject(UObject* relevantObject, FYAbilityActionBombardmentData& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindBlinkAbilityDataFromObject(UObject* relevantObject, FYAbilityActionBlinkData& outData) {
    return false;
}

bool UYAbilityExternalFunctions::FindAbilityActionDataFromObject(UObject* relevantObject, FYAbilityActionDataTableRow& outData) {
    return false;
}

int32 UYAbilityExternalFunctions::ExecuteAbilityTransport(const FYAbilityTransportInitializationData& executionInitData) {
    return 0;
}

float UYAbilityExternalFunctions::DetermineActiveTimeTotal(const FDataTableRowHandle& abilityRow, UObject* contextPlayerObject) {
    return 0.0f;
}


