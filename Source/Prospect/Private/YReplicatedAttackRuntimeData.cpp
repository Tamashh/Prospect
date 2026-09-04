#include "YReplicatedAttackRuntimeData.h"

FYReplicatedAttackRuntimeData::FYReplicatedAttackRuntimeData() {
    this->m_serverTimestamp = 0.0f;
    this->m_indexRangedAttack = 0;
    this->m_attackStatus = EYAIAttackStatus::Running;
}

