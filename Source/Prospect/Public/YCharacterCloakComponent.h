#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnCloakMIDInitializedDelegate.h"
#include "OnCloakStateChangedDelegate.h"
#include "YCloakMaterialsInfo.h"
#include "YCloakRuntimeData.h"
#include "YCharacterCloakComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterCloakComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_cloakMaterialMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCloaked, meta=(AllowPrivateAccess=true))
    FYCloakRuntimeData m_runtimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCloakMaterialsInfo> m_nonCloakedMaterialInfos;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloakMIDInitialized OnCloakMIDStateChanged;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloakStateChanged OnCloakStateChanged;
    
    UYCharacterCloakComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCloaked(FYCloakRuntimeData oldData);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedActiveWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnBagMeshChangedCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCloaked();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCloak();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCloak(FDataTableRowHandle desiredData);
    
};

