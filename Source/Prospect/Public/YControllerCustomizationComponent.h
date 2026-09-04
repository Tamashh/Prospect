#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnNewActiveCustomizationDataDelegate.h"
#include "OnNewGlobalVanityDataDelegate.h"
#include "OnRequestRotationStateDelegate.h"
#include "OnRequestWeaponVanityTemporaryVisualizationDelegate.h"
#include "OnResetRequestDelegate.h"
#include "OnSelectedCustomizationPartDelegate.h"
#include "OnSelectedNewCustomizationRowHandleDelegate.h"
#include "OnSelectedTemporaryCustomizationPartUpdateDelegate.h"
#include "YControllerCustomizationComponent.generated.h"

class AActor;
class UYControllerCustomizationComponent;
class UYGlobalVanityModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedCustomizationPart OnRequestCustomizationPartChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedNewCustomizationRowHandle OnSelectedNewCustomizationRowHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedTemporaryCustomizationPartUpdate OnTemporaryShowCustomizationEntryUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewActiveCustomizationData OnNewCustomizatonData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetRequest OnResetRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestRotationState OnRequestRotationState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestWeaponVanityTemporaryVisualization OnRequestWeaponVanityTemporaryVisualization;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewGlobalVanityData OnGlobalVanityDataChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYGlobalVanityModel* m_globalVanityModel;
    
    UYControllerCustomizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestUpdateActiveGlobalVanity(const FYActiveGlobalVanity& newVanity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDebugRequestUpdateActiveGlobalVanity(const FYActiveGlobalVanity& newVanity);
    
    UFUNCTION(BlueprintCallable)
    void RequestWeaponVanityTemporaryVisualization(const FDataTableRowHandle& Handle, bool shouldShow, bool overrideOtherVanity) const;
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVanityStateDataChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGlobalVanityDataUpdated();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCustomization();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCustomizationComponent* FindCustomizationComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    void DebugUpdateActiveGlobalVanity(const TArray<FString>& newVanity, const FString& droppodId);
    
};

