#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NetDBAsyncExecutePreparedQueryDelegate.h"
#include "AsyncExecutePreparedQuery.generated.h"

class UAsyncExecutePreparedQuery;
class UDatabaseConnection;
class UPreparedQuery;

UCLASS(Blueprintable)
class NETDBPLUGIN_API UAsyncExecutePreparedQuery : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncExecutePreparedQuery onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncExecutePreparedQuery OnFail;
    
    UAsyncExecutePreparedQuery();

    UFUNCTION(BlueprintCallable)
    static UAsyncExecutePreparedQuery* ExecutePreparedQueryAsync(UDatabaseConnection* Connection, UPreparedQuery* Query);
    
};

