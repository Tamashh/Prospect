#include "YEnvQueryTest_TraceMaterial.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UYEnvQueryTest_TraceMaterial::UYEnvQueryTest_TraceMaterial() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


