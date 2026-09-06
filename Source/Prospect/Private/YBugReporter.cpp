#include "YBugReporter.h"

UYBugReporter::UYBugReporter() {
    this->JiraURL = TEXT("https://jira.yager.de/rest/api/2/issue/");
    this->AuthKey = TEXT("eWFnZXJ0b29sczpmOEF1bXd1RVp6MndYY3VQ");
}

void UYBugReporter::SetBugDataPreparedDelegate(UYBugReporter::FYBugDataPrepared Delegate) {
}

void UYBugReporter::OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames) {
}

void UYBugReporter::OnScreenshotCreated() {
}

FString UYBugReporter::GetSettingsTable() {
    return TEXT("");
}

FString UYBugReporter::GetScreenShotPath() {
    return TEXT("");
}

FString UYBugReporter::GetLogPath() {
    return TEXT("");
}

FString UYBugReporter::GetHardwareInfoTable() {
    return TEXT("");
}

UWorld* UYBugReporter::GetCurrentWorld(AActor* WorldContextObject) {
    return NULL;
}

FString UYBugReporter::GetCurrentPlayerViewLocationRotation(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentPlayerName() {
    return TEXT("");
}

FString UYBugReporter::GetCurrentPlayerID() {
    return TEXT("");
}

FString UYBugReporter::GetCurrentPlatform(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentMap(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentHowlerLocationAndRotation(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentGamemode(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentEnvironment(UWorld* World) {
    return TEXT("");
}

FString UYBugReporter::GetCurrentChangelist() {
    return TEXT("");
}

FString UYBugReporter::GetCurrentBattleServer(UWorld* World) {
    return TEXT("");
}

UYBugReporter* UYBugReporter::GetBugReporter() {
    return NULL;
}

FString UYBugReporter::GetActualVersion() {
    return TEXT("");
}

FString UYBugReporter::FormatDescription(const FString& Behavior, const FString& ReproSteps) {
    return TEXT("");
}

void UYBugReporter::FlushAllPressedKeys(AYPlayerController* CurrentPlayerController) {
}

bool UYBugReporter::CreateJiraBug(const FString& InUrl, const FString& InIssueTypeId, const FString& InProject, const FString& InSummary, const FString& InDescription, TArray<FString> InLabels, TMap<FString, FString> InAdditionalFields, TMap<FString, FString> InAdditionalPicker) {
    return false;
}

void UYBugReporter::CollectScreenshot() {
}

void UYBugReporter::CollectLog() {
}

bool UYBugReporter::BugReporterCollectLogAndScreenshot(AYPlayerController* Player) {
    return false;
}

bool UYBugReporter::AttachFile(const FString& InUrl, const FString& InJiraKey, const FString& InFilePath) {
    return false;
}

void UYBugReporter::AddFile(const FString& FilePath) {
}


