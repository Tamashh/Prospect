#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EYCustomizationMode.h"
#include "YActiveVanityCustomizationInitializatonData.h"
#include "YVanityCustomizationActor.generated.h"

class AYBannerActor;
class AYMeleeActor;
class AYPodActor;
class AYSprayActor;
class AYVehicle;
class UDataTable;
class USkeletalMesh;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;
class UYCustomizationCameraComponent;

UCLASS(Blueprintable)
class AYVanityCustomizationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_CameraDataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_meshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_baseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCustomizationCameraComponent* m_customizationCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYBannerActor* m_bannerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYSprayActor* m_sprayActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYVehicle* m_vehicleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPodActor* m_droppodActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYMeleeActor* m_meleeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveVanityCustomizationInitializatonData m_initializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYVanityType, FDataTableRowHandle> m_cameraRowHandles;
    
public:
    AYVanityCustomizationActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshVisibilityActors(EYCustomizationMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldLocationChanged(const FTransform& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingVanityData(int32 lastLoadHandle, TArray<FSoftObjectPath> asyncPaths, FSoftObjectPath ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGenericCustomizationDataVisualization(const TArray<USkeletalMesh*>& skeletalMeshes, const TArray<UStaticMesh*>& staticMeshes, UTexture2D* Texture, FRotator RelativeRotation, FVector RelativeLocation, FVector Scale, EYVanityType vanityType);
    
};

