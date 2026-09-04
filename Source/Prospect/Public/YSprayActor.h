#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "YSprayActor.generated.h"

class UDecalComponent;
class UMaterialInterface;
class USceneComponent;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;
class UYDataTableRowAssociationComponent;

UCLASS(Blueprintable)
class AYSprayActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDataTableRowAssociationComponent* m_rowAssociationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* m_sprayDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_decalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> m_previewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_previewStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> m_cachedSoundToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_cachedDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_decalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_rootComponent;
    
    AYSprayActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPreviewMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRowChanged(FDataTableRowHandle oldRowHandle, FDataTableRowHandle newRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncLoading(TSoftObjectPtr<UStaticMesh> Mesh) const;
    
    UFUNCTION(BlueprintCallable)
    void AssetsLoaded() const;
    
};

