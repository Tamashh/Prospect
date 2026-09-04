#include "YMatchPhaseFunctionsLibrary.h"

UYMatchPhaseFunctionsLibrary::UYMatchPhaseFunctionsLibrary() {
}

FString UYMatchPhaseFunctionsLibrary::FindMatchFlowToUse(UObject* WorldContext) {
    return TEXT("");
}

bool UYMatchPhaseFunctionsLibrary::BlendMatchPhaseVisualRow(FDataTableRowHandle fromPhaseHandle, FDataTableRowHandle toPhaseHandle, float Alpha, FYMatchPhaseVisualRow& outRow) {
    return false;
}

bool UYMatchPhaseFunctionsLibrary::BlendMatchPhaseVisualData(FYMatchPhaseVisualRow fromVisualData, FYMatchPhaseVisualRow toVisualData, float Alpha, FYMatchPhaseVisualRow& outRow) {
    return false;
}


