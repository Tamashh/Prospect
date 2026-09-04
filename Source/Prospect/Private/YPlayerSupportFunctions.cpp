#include "YPlayerSupportFunctions.h"

UYPlayerSupportFunctions::UYPlayerSupportFunctions() {
}

void UYPlayerSupportFunctions::SubmitPlayerReport(AActor* WorldContext, const FYSendPlayerReportRequest& Data, const FString& callerContext) {
}

void UYPlayerSupportFunctions::StartReportOnUser(AActor* WorldContext, const FString& userIdToReport, const FString& contextString) {
}

FText UYPlayerSupportFunctions::ReportPlayerTypeToText(EYReportPlayerType Type) {
    return FText::GetEmpty();
}

bool UYPlayerSupportFunctions::IsNewReporterEnabled(const AActor* WorldContext) {
    return false;
}

bool UYPlayerSupportFunctions::HasReportedUserId(AActor* WorldContext, const FString& contextString) {
    return false;
}

FString UYPlayerSupportFunctions::GetReportedUserName(AActor* WorldContext, const FString& contextString) {
    return TEXT("");
}

FString UYPlayerSupportFunctions::GetReportedUserId(AActor* WorldContext, const FString& contextString) {
    return TEXT("");
}

TArray<FDataTableRowHandle> UYPlayerSupportFunctions::GetPlayerReportOptionRowHandles(const AActor* WorldContext) {
    return TArray<FDataTableRowHandle>();
}

FYPlayerReportOptionDataTableRow UYPlayerSupportFunctions::GetPlayerReportOptionRowHandle(const AActor* WorldContext, const FName& RowName) {
    return FYPlayerReportOptionDataTableRow{};
}

FString UYPlayerSupportFunctions::CustomerServiceRequestTypeToZendeskString(EYCustomerServiceRequestType customerServiceRequestType) {
    return TEXT("");
}

FText UYPlayerSupportFunctions::CustomerServiceRequestTypeToText(EYCustomerServiceRequestType customerServiceRequestType) {
    return FText::GetEmpty();
}


