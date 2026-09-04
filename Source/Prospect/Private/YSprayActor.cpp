#include "YSprayActor.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "YDataTableRowAssociationComponent.h"

AYSprayActor::AYSprayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetUpdateFrequency = 1.0f;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_rowAssociationComponent = CreateDefaultSubobject<UYDataTableRowAssociationComponent>(TEXT("RowAssociationComponent"));
    this->m_sprayDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->m_decalMaterial = NULL;
    this->m_previewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    this->m_fadeDuration = 1.0f;
    this->m_rootComponent = (USceneComponent*)RootComponent;
    this->m_previewStaticMeshComponent->SetupAttachment(RootComponent);
    this->m_sprayDecal->SetupAttachment(RootComponent);
}

void AYSprayActor::SetPreviewMesh_Implementation() const {
}

void AYSprayActor::OnRowChanged(FDataTableRowHandle oldRowHandle, FDataTableRowHandle newRowHandle) {
}

void AYSprayActor::OnFinishedAsyncLoading(TSoftObjectPtr<UStaticMesh> Mesh) const {
}

void AYSprayActor::AssetsLoaded() const {
}


