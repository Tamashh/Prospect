#include "HorizonTweenLinearColorEvent.h"

UHorizonTweenLinearColorEvent::UHorizonTweenLinearColorEvent() {
}

FHorizonTweenEventLinearColorParameters UHorizonTweenLinearColorEvent::GetEventParamImpl() {
    return FHorizonTweenEventLinearColorParameters{};
}

FLinearColor UHorizonTweenLinearColorEvent::GetCurrentLerp() {
    return FLinearColor{};
}


