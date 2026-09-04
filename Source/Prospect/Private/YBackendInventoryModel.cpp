#include "YBackendInventoryModel.h"

UYBackendInventoryModel::UYBackendInventoryModel() {
    this->m_status = 0;
    this->m_rawInventoryDataReceived = false;
    this->m_rawPlayerSetDataReceived = false;
}

void UYBackendInventoryModel::EvaluateInitializationStatus(TArray<EYInventoryPlayerTypes> Type) {
}


