#include "YVanityCustomizationActor.h"
#include "Components/StaticMeshComponent.h"
#include "YCustomizationCameraComponent.h"

AYVanityCustomizationActor::AYVanityCustomizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_CameraDataTable = NULL;
    this->m_meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_baseMeshComponent = NULL;
    this->m_customizationCameraComponent = CreateDefaultSubobject<UYCustomizationCameraComponent>(TEXT("CustomizationCameraComponent"));
    this->m_bannerActor = NULL;
    this->m_sprayActor = NULL;
    this->m_droppodActor = NULL;
    this->m_meleeActor = NULL;
}

void AYVanityCustomizationActor::RefreshVisibilityActors(EYCustomizationMode Mode) {
}

void AYVanityCustomizationActor::OnWorldLocationChanged(const FTransform& WorldLocation) {
}

void AYVanityCustomizationActor::OnFinishedLoadingVanityData(int32 lastLoadHandle, TArray<FSoftObjectPath> asyncPaths, FSoftObjectPath ActorClass) {
}



