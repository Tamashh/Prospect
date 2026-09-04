#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDataType.h"
#include "NetDBPluginBPLibrary.generated.h"

class UDataObject;
class UDatabaseConnection;
class UPreparedQuery;
class UQueryRow;

UCLASS(Blueprintable)
class NETDBPLUGIN_API UNetDBPluginBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetDBPluginBPLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPreparedQuery* PrepareQuery(const FString& Query, TArray<UDataObject*> arguements);
    
    UFUNCTION(BlueprintCallable)
    static UDatabaseConnection* PostgresConnect(bool& bWasSuccessful, const FString& database, const FString& Username, const FString& Password, const FString& ip, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    static EDataType GetRowColumnType(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRowColumnAsString(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRowColumnAsInt(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static float GetRowColumnAsFloat(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRowColumnAsChar(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRowColumnAsBool(UQueryRow* row, const FString& ColumnName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UQueryRow*> ExecuteQuery(bool& bWasSuccessful, UDatabaseConnection* Connection, const FString& Query);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UQueryRow*> ExecutePreparedQuery(bool& bWasSuccessful, UDatabaseConnection* Connection, UPreparedQuery* Query);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataObject* CreateDataObjectFromString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataObject* CreateDataObjectFromInt(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataObject* CreateDataObjectFromFloat(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataObject* CreateDataObjectFromBool(bool Value);
    
};

