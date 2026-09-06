#include "YEnvQueryGenerator_SimpleGrid3D.h"

UYEnvQueryGenerator_SimpleGrid3D::UYEnvQueryGenerator_SimpleGrid3D() {
    this->m_useCustomZSampling = false;
    this->m_samplesZ_Min = -250.0f;
    this->m_samplesZ_Max = 750.0f;
    this->m_numZSamples = 4;
}
