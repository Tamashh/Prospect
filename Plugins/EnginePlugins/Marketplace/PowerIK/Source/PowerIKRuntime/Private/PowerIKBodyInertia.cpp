#include "PowerIKBodyInertia.h"

FPowerIKBodyInertia::FPowerIKBodyInertia() {
    this->ApplyInertiaToBody = false;
    this->SmoothFactor = 0.0f;
    this->UseSpring = false;
    this->SpringStrength = 0.0f;
    this->SpringDamping = 0.0f;
}

