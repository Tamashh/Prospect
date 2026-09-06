#include "YMapsInfosFunctionsLibrary.h"

UYMapsInfosFunctionsLibrary::UYMapsInfosFunctionsLibrary() {
}

bool UYMapsInfosFunctionsLibrary::IsStationMap(UObject* objectContext, const FString& mapName) {
    return false;
}

FText UYMapsInfosFunctionsLibrary::GetName(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString) {
    return FText::GetEmpty();
}

TArray<FName> UYMapsInfosFunctionsLibrary::GetMapsInfosRowNames(const UObject* objectContext, const FString& contextString) {
    return TArray<FName>();
}

FString UYMapsInfosFunctionsLibrary::GetMapPath(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString) {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UYMapsInfosFunctionsLibrary::GetImage(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString) {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UYMapsInfosFunctionsLibrary::GetHologramMaterial(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString) {
    return NULL;
}

FName UYMapsInfosFunctionsLibrary::GetFirstUnlockedMapInfoRowName(UObject* objectContext, const FString& contextString) {
    return NAME_None;
}

bool UYMapsInfosFunctionsLibrary::GetFirstUnlockedMapInfoRowHandle(UObject* objectContext, FYMapInfoRow& outRow, const FString& contextString) {
    return false;
}

bool UYMapsInfosFunctionsLibrary::FindMapInfoRow(UObject* objectContext, const FString& mapInfoRowId, FYMapInfoRow& outRow, const FString& contextString) {
    return false;
}

bool UYMapsInfosFunctionsLibrary::FindCurrentMapInfoRowHandle(const UObject* objectContext, FDataTableRowHandle& outRowHandle, const FString& contextString) {
    return false;
}

int32 UYMapsInfosFunctionsLibrary::DetermineCountBasedOnMap(UObject* objectContext, const FYCountPerMap& countPerMapInfo) {
    return 0;
}


