#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "YSkeletalMeshComponentFOV.generated.h"

class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYSkeletalMeshComponentFOV : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lerpFOVSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_desiredFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useCustomFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* m_weaponScopeParameterCollectionInstance;
    
    UYSkeletalMeshComponentFOV(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMatrix BP_GetRenderMatrix() const;
    
};

