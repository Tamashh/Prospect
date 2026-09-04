#include "YWidget_QuestInfo.h"

UYWidget_QuestInfo::UYWidget_QuestInfo() {
    this->m_questName = NULL;
    this->m_questTaskText = NULL;
    this->m_questCurrentProgress = NULL;
    this->m_questMaxProgress = NULL;
}

void UYWidget_QuestInfo::SetQuestTaskText(FText& questTaskText) {
}

void UYWidget_QuestInfo::SetQuestName(FText& questName) {
}

void UYWidget_QuestInfo::SetQuestMaxProgress(int32 questMaxProgress) {
}

void UYWidget_QuestInfo::SetQuestEntry(FYQuestDataDataTableRow& questData) {
}

void UYWidget_QuestInfo::SetQuestCurrentProgress(int32 questCurrentProgress) {
}

FText UYWidget_QuestInfo::GetQuestTaskText() {
    return FText::GetEmpty();
}

FText UYWidget_QuestInfo::GetQuestName() {
    return FText::GetEmpty();
}


