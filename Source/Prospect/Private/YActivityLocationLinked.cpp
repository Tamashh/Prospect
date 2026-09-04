#include "YActivityLocationLinked.h"

AYActivityLocationLinked::AYActivityLocationLinked(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_linkRadius = -1.0f;
    this->m_scoreSpawnThreshold = 100;
    this->m_linkType = EYLinkType::Evaluation;
    this->m_NetCullDistanceOverride = 0.0f;
    this->m_UseCullDistanceOverride = false;
}

TArray<AYActivityLocation*> AYActivityLocationLinked::RunEvaluationCheckForLocations(UObject* contextObject, EYActivityType Type) {
    return TArray<AYActivityLocation*>();
}

FString AYActivityLocationLinked::GetLinkDebugDescription() {
    return TEXT("");
}

bool AYActivityLocationLinked::EvaluateLocation() {
    return false;
}

void AYActivityLocationLinked::DebugUpdateRunLinkActorCheck(TArray<AYActivityLocation*>& outLinkedLocations) {
}

bool AYActivityLocationLinked::DebugIsEncapsulatedByArea() {
    return false;
}


