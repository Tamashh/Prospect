#include "YSocialActor.h"
#include "Net/UnrealNetwork.h"
#include "YActorUIComponent.h"
#include "YMapMarkerComponent.h"

AYSocialActor::AYSocialActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetUpdateFrequency = 1.0f;
    this->m_mapmarkerComponent = CreateDefaultSubobject<UYMapMarkerComponent>(TEXT("MapMarkerComponent"));
    this->m_actorUIComponent = CreateDefaultSubobject<UYActorUIComponent>(TEXT("YActorUIComponent"));
    this->m_pingableComponent = NULL;
    this->m_contextActorPinged = NULL;
    this->m_proximityCheckFrequency = 1.0f;
    this->m_destroyDistance = 1000.0f;
}

void AYSocialActor::ServerRequestDestroy_Implementation() {
}
bool AYSocialActor::ServerRequestDestroy_Validate() {
    return true;
}

void AYSocialActor::OnRep_AcknowledgedPlayerStates() {
}

void AYSocialActor::DestroyDueMaxLifeTime() {
}

void AYSocialActor::CheckDestroy() {
}

void AYSocialActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYSocialActor, m_commWheelContext);
    DOREPLIFETIME(AYSocialActor, m_contextActorPinged);
    DOREPLIFETIME(AYSocialActor, m_acknowledgedPlayerStates);
}


