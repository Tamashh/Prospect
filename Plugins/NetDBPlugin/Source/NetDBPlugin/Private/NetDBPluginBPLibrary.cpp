#include "NetDBPluginBPLibrary.h"

UNetDBPluginBPLibrary::UNetDBPluginBPLibrary() {
}

UPreparedQuery* UNetDBPluginBPLibrary::PrepareQuery(const FString& Query, TArray<UDataObject*> arguements) {
    return NULL;
}

UDatabaseConnection* UNetDBPluginBPLibrary::PostgresConnect(bool& bWasSuccessful, const FString& database, const FString& Username, const FString& Password, const FString& ip, int32 Port) {
    return NULL;
}

EDataType UNetDBPluginBPLibrary::GetRowColumnType(UQueryRow* row, const FString& ColumnName) {
    return EDataType::DT_INT;
}

FString UNetDBPluginBPLibrary::GetRowColumnAsString(UQueryRow* row, const FString& ColumnName) {
    return TEXT("");
}

int32 UNetDBPluginBPLibrary::GetRowColumnAsInt(UQueryRow* row, const FString& ColumnName) {
    return 0;
}

float UNetDBPluginBPLibrary::GetRowColumnAsFloat(UQueryRow* row, const FString& ColumnName) {
    return 0.0f;
}

FString UNetDBPluginBPLibrary::GetRowColumnAsChar(UQueryRow* row, const FString& ColumnName) {
    return TEXT("");
}

bool UNetDBPluginBPLibrary::GetRowColumnAsBool(UQueryRow* row, const FString& ColumnName) {
    return false;
}

TArray<UQueryRow*> UNetDBPluginBPLibrary::ExecuteQuery(bool& bWasSuccessful, UDatabaseConnection* Connection, const FString& Query) {
    return TArray<UQueryRow*>();
}

TArray<UQueryRow*> UNetDBPluginBPLibrary::ExecutePreparedQuery(bool& bWasSuccessful, UDatabaseConnection* Connection, UPreparedQuery* Query) {
    return TArray<UQueryRow*>();
}

UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromString(const FString& Value) {
    return NULL;
}

UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromInt(int32 Value) {
    return NULL;
}

UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromFloat(float Value) {
    return NULL;
}

UDataObject* UNetDBPluginBPLibrary::CreateDataObjectFromBool(bool Value) {
    return NULL;
}


