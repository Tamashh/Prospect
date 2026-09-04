#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYCustomerServiceRequestType.h"
#include "EYReportPlayerType.h"
#include "YPlayerReportOptionDataTableRow.h"
#include "YSendPlayerReportRequest.h"
#include "YPlayerSupportFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYPlayerSupportFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYPlayerSupportFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SubmitPlayerReport(AActor* WorldContext, const FYSendPlayerReportRequest& Data, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartReportOnUser(AActor* WorldContext, const FString& userIdToReport, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ReportPlayerTypeToText(EYReportPlayerType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsNewReporterEnabled(const AActor* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HasReportedUserId(AActor* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetReportedUserName(AActor* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetReportedUserId(AActor* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FDataTableRowHandle> GetPlayerReportOptionRowHandles(const AActor* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FYPlayerReportOptionDataTableRow GetPlayerReportOptionRowHandle(const AActor* WorldContext, const FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CustomerServiceRequestTypeToZendeskString(EYCustomerServiceRequestType customerServiceRequestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText CustomerServiceRequestTypeToText(EYCustomerServiceRequestType customerServiceRequestType);
    
};

