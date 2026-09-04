#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnJiraTicketCreatedDelegate.h"
#include "YOnInitializingBugReportDelegate.h"
#include "YBugReporter.generated.h"

class AActor;
class AYPlayerController;
class UWorld;
class UYBugReporter;

UCLASS(Blueprintable)
class UYBugReporter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FYBugDataPrepared);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LogFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScreenshotFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CurrentBugReportFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JiraURL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJiraTicketCreated OnJiraTicketCreatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInitializingBugReport OnInitializingBugReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthKey;
    
    UYBugReporter();

    UFUNCTION(BlueprintCallable)
    static void SetBugDataPreparedDelegate(UYBugReporter::FYBugDataPrepared Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenshotCreated();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSettingsTable();
    
    UFUNCTION(BlueprintCallable)
    static FString GetScreenShotPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLogPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetHardwareInfoTable();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWorld* GetCurrentWorld(AActor* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentPlayerViewLocationRotation(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentPlayerName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentPlayerID();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentPlatform(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentMap(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentGamemode(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentEnvironment(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentChangelist();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentBattleServer(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static UYBugReporter* GetBugReporter();
    
    UFUNCTION(BlueprintCallable)
    static FString GetActualVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString FormatDescription(const FString& Behavior, const FString& ReproSteps);
    
    UFUNCTION(BlueprintCallable)
    static void FlushAllPressedKeys(AYPlayerController* CurrentPlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool CreateJiraBug(const FString& InUrl, const FString& InIssueTypeId, const FString& InProject, const FString& InSummary, const FString& InDescription, TArray<FString> InLabels, TMap<FString, FString> InAdditionalFields, TMap<FString, FString> InAdditionalPicker);
    
private:
    UFUNCTION(BlueprintCallable)
    void CollectScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void CollectLog();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool BugReporterCollectLogAndScreenshot(AYPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    bool AttachFile(const FString& InUrl, const FString& InJiraKey, const FString& InFilePath);
    
    UFUNCTION(BlueprintCallable)
    void AddFile(const FString& FilePath);
    
};

