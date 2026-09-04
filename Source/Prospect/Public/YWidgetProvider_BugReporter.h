#pragma once
#include "CoreMinimal.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_BugReporter.generated.h"

UCLASS(Blueprintable)
class UYWidgetProvider_BugReporter : public UYWidgetProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_jiraURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_issueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_jiraProject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_newLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_separator;
    
public:
    UYWidgetProvider_BugReporter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreparedTexts(const FText& bugSummary, const FText& playerBehaviour, const FText& ReproSteps, FString& Summary, FString& fullDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetCustomFields() const;
    
};

