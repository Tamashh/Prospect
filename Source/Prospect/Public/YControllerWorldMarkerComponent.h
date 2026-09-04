#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "YActiveWorldMarkerData.h"
#include "YWorldMarkerTypeData.h"
#include "YControllerWorldMarkerComponent.generated.h"

class AActor;
class UDataTable;
class UObject;
class UYControllerWorldMarkerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerWorldMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_markerTypesTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveWorldMarkerData> m_activeMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveWorldMarkerData> m_pendingMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMarkerData, meta=(AllowPrivateAccess=true))
    TArray<FYActiveWorldMarkerData> m_replicatedMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVector> m_registeredMarkerLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> m_spawnedWorldMarkers;
    
public:
    UYControllerWorldMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void YDebugDumpRegisteredWorldMarkerTargets();
    
    UFUNCTION(BlueprintCallable)
    void YDebugDumpActiveWorldMarkers();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveWorldMarker(UObject* contextObject, const FGameplayTag markerTargetTag, const FGameplayTag markerTypeTag, bool bRemoveAllTypes, bool bClearStack);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMarkerData(const TArray<FYActiveWorldMarkerData> oldData);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool FindMarkerTypeData(UObject* contextObject, const FGameplayTag markerTypeTag, FYWorldMarkerTypeData& outData);
    
    UFUNCTION(BlueprintCallable)
    bool FindLocationForMarker(const FGameplayTag markerTargetTag, FVector& outVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerWorldMarkerComponent* FindControllerWorldMarkerComponent(UObject* contextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddWorldMarker(UObject* contextObject, const FGameplayTag markerTargetTag, const FGameplayTag markerTypeTag);
    
};

