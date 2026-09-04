#include "YAIDesyncEvent.h"

FYAIDesyncEvent::FYAIDesyncEvent() {
    this->montagePosition = 0.0f;
    this->from_x = 0;
    this->from_y = 0;
    this->to_x = 0;
    this->to_y = 0;
    this->Distance = 0.0f;
    this->timeSinceCreation = 0.0f;
    this->Ping = 0.0f;
    this->packetloss_in = 0.0f;
    this->packetloss_out = 0.0f;
}

