#include "YPlayerReportOptionDataTableRow.h"

FYPlayerReportOptionDataTableRow::FYPlayerReportOptionDataTableRow() {
    this->m_disabled = false;
    this->m_requiresUserReport = false;
    this->m_hasMaxSelectionCount = false;
    this->m_maxSubReasonSelectionCount = 0;
    this->m_minBodyCharacterCount = 0;
    this->m_maxBodyCharacterCount = 0;
}

