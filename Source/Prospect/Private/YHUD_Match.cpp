#include "YHUD_Match.h"

AYHUD_Match::AYHUD_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_hudScreenClass = NULL;
}


