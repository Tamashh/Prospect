#include "YVivoxJoinTokenRequest.h"

FYVivoxJoinTokenRequest::FYVivoxJoinTokenRequest() {
    this->ChannelType = EYChannelType::NONE;
    this->hasText = false;
    this->hasAudio = false;
}

