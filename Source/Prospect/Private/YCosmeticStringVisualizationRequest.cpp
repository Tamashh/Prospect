#include "YCosmeticStringVisualizationRequest.h"

FYCosmeticStringVisualizationRequest::FYCosmeticStringVisualizationRequest() {
    this->m_iterationCount = 0;
    this->m_iterationDelay = 0.0f;
    this->m_handle = 0;
    this->m_charPerIteration = 0;
    this->m_currentIterationCount = 0;
    this->m_currentIterationDelay = 0.0f;
    this->m_isFinished = false;
}

