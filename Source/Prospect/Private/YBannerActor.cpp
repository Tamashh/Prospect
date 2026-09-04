#include "YBannerActor.h"
#include "YDataTableRowAssociationComponent.h"

AYBannerActor::AYBannerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetUpdateFrequency = 1.0f;
    this->m_isLocalAttachedBanner = false;
    this->m_rowAssociationComponent = CreateDefaultSubobject<UYDataTableRowAssociationComponent>(TEXT("RowAssociationComponent"));
    this->m_isCustomizationBanner = false;
}




