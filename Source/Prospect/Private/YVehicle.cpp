#include "YVehicle.h"
#include "Net/UnrealNetwork.h"
#include "YDamageComponent.h"
#include "YHealthComponent.h"
#include "YInventoryAssociationComponent.h"
#include "YMapMarkerComponent.h"
#include "YObjectInteractionComponent.h"
#include "YVehicleMovementComponent.h"

AYVehicle::AYVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UYVehicleMovementComponent>(TEXT("CharMoveComp"))) {
    this->NetUpdateFrequency = 10.0f;
    this->m_activeRotationDelta = 0.0f;
    this->m_interactionComponent = CreateDefaultSubobject<UYObjectInteractionComponent>(TEXT("ObjectInteraction"));
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->m_vehicleMovementComponent = (UYVehicleMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UYVehicleMovementComponent*>(this);
    this->m_damageComponent = CreateDefaultSubobject<UYDamageComponent>(TEXT("DamageComponent"));
    this->m_healthComponent = CreateDefaultSubobject<UYHealthComponent>(TEXT("healthComponent"));
    this->m_mapmarkerComponent = CreateDefaultSubobject<UYMapMarkerComponent>(TEXT("YNoiseMapMarkerComponent"));
    this->m_mainAudioComponent = NULL;
    this->m_inventoryAssociationComponent = CreateDefaultSubobject<UYInventoryAssociationComponent>(TEXT("InventoryAssociationComponent"));
    this->m_angularVelocity = 0.0f;
    this->m_speedCurrentTick = 0.0f;
    this->m_isCosmeticState = false;
}

void AYVehicle::OnRep_NewRuntimeData() {
}

void AYVehicle::OnPossedPawnStateChanged(bool wasInteruppted) {
}

void AYVehicle::OnPossedPawnMeshInitialized() {
}

void AYVehicle::OnInventoryItemChanged(FYInventoryItem oldItem, FYInventoryItem newItem) {
}

void AYVehicle::OnInteractionTimeChange(float& outInteractionTime, AActor* relevantActor) {
}

void AYVehicle::OnInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer) {
}

void AYVehicle::OnHealthZero(UYHealthComponent* healthComponent, AActor* actorInstigator) {
}

void AYVehicle::OnFinishedAsyncLoading(int32 loadHandle) {
}






void AYVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYVehicle, m_runtimeState);
}


