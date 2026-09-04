#include "YAnalyticsHardwareStats.h"

FYAnalyticsHardwareStats::FYAnalyticsHardwareStats() {
    this->graphic_memory_size = 0;
    this->graphic_memory_size_dedicated = 0;
    this->graphic_memory_size_shared = 0;
    this->cpu_model = 0;
    this->map_loading_time = 0;
    this->cpu_stepping = 0;
    this->cpu_processor_frequency = 0;
    this->cpu_processor_count = 0;
    this->cpu_processor_real_count = 0;
    this->cpu_processor_virtual_count = 0;
    this->system_memory_size = 0;
}

