#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NetDBAsyncExecuteQueryDelegate.h"
#include "AsyncExecuteQuery.generated.h"

class UAsyncExecuteQuery;
class UDatabaseConnection;

UCLASS(Blueprintable)
class NETDBPLUGIN_API UAsyncExecuteQuery : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncExecuteQuery onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncExecuteQuery OnFail;
    
    UAsyncExecuteQuery();

    UFUNCTION(BlueprintCallable)
    static UAsyncExecuteQuery* ExecuteQueryAsync(UDatabaseConnection* Connection, const FString& Query);
    
};

