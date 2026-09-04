#include "YMineralActivityStats.h"

FYMineralActivityStats::FYMineralActivityStats() {
    this->remaining_segments = 0;
    this->total_segment_count = 0;
    this->time_since_user_joined = 0;
    this->time_spent = 0;
    this->total_hit_count = 0;
    this->contested = false;
}

