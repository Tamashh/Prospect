#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YQuestDataDataTableRow.h"
#include "YWidget_QuestInfo.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_QuestInfo : public UYWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_questName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_questTaskText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_questCurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_questMaxProgress;
    
public:
    UYWidget_QuestInfo();

    UFUNCTION(BlueprintCallable)
    void SetQuestTaskText(FText& questTaskText);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestName(FText& questName);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestMaxProgress(int32 questMaxProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestEntry(FYQuestDataDataTableRow& questData);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestCurrentProgress(int32 questCurrentProgress);
    
    UFUNCTION(BlueprintCallable)
    FText GetQuestTaskText();
    
    UFUNCTION(BlueprintCallable)
    FText GetQuestName();
    
};

