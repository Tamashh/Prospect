#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYNotificationsCategory.h"
#include "YNotificationDescription.h"
#include "YNotificationsRow.h"
#include "YNotificationsFunctions.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYNotificationsFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYNotificationsFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetNotificationSilent(const UObject* objCtx, EYNotificationsCategory Category, bool silent);
    
    UFUNCTION(BlueprintCallable)
    static void SendNotificationToSelfNoParams(const UObject* objCtx, const FName& notificationRowName);
    
    UFUNCTION(BlueprintCallable)
    static void SendNotificationToSelf(const UObject* objCtx, const FName& notificationRowName, TMap<FString, FString> textParameters, TMap<FString, FString> localizedParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SendNotificationLocal(const UObject* WorldContext, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotificationSilent(const UObject* objCtx, const FYNotificationDescription& notificationDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNotificationsRow(const UObject* objCtx, FName RowName, FYNotificationsRow& row);
    
};

