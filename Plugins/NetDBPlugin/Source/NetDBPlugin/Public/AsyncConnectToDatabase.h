#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NetDBAsyncConnectDelegate.h"
#include "AsyncConnectToDatabase.generated.h"

class UAsyncConnectToDatabase;

UCLASS(Blueprintable)
class NETDBPLUGIN_API UAsyncConnectToDatabase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncConnect onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetDBAsyncConnect OnFail;
    
    UAsyncConnectToDatabase();

    UFUNCTION(BlueprintCallable)
    static UAsyncConnectToDatabase* PostgresConnectAsync(const FString& database, const FString& Username, const FString& Password, const FString& ip, int32 Port);
    
};

