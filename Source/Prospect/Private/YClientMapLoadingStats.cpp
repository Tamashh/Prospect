#include "YClientMapLoadingStats.h"

FYClientMapLoadingStats::FYClientMapLoadingStats() {
    this->map_loading_time = 0;
    this->physical_memory_total = 0;
    this->physical_memory_usage = 0ULL;
    this->physical_memory_available = 0ULL;
    this->physical_memory_peak = 0ULL;
    this->page_size = 0ULL;
    this->virtual_memory_total = 0ULL;
    this->virtual_memory_usage = 0ULL;
    this->virtual_memory_available = 0ULL;
    this->virtual_memory_peak = 0ULL;
}

