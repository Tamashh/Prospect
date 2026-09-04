#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYTransportHitType.h"
#include "EYWeaponTransportHitResultType.h"
#include "OnActivateWeaponTransportDelegate.h"
#include "OnDeactivateWeaponTransportDelegate.h"
#include "OnHitTransportNotifyDelegate.h"
#include "OnHitWeaponTransportComponentDelegate.h"
#include "OnOwnerInstigatorItemRemovedDelegate.h"
#include "OnWeaponTransportComponentDestroyedDelegate.h"
#include "YWeaponTransportComponent.generated.h"

class UObject;
class UYWeaponTransportComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYWeaponTransportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivateWeaponTransport OnActivateWeaponTransport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeactivateWeaponTransport OnDeactivateWeaponTransport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitWeaponTransportComponent OnHitImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitTransportNotify OnHitNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnerInstigatorItemRemoved OnOwnerInstigatorItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponTransportComponentDestroyed OnWeaponTransportComponentDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_onlyProduceImpactDatatableRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nonReplicatedTransportHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTransportHitType m_hitTransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYWeaponTransportHitResultType m_hitResultReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_spawnActorsOnImpact;
    
    UYWeaponTransportComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UYWeaponTransportComponent* FindWeaponTransportComponentGivenContextHandle(UObject* Context, int32 Handle);
    
};

