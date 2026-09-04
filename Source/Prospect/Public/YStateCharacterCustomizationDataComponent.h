#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCustomizationBodyTypeUpdatedDelegate.h"
#include "OnFinishedAsyncLoadingDelegate.h"
#include "YActiveCustomizationData.h"
#include "YStateCharacterCustomizationDataComponent.generated.h"

class UObject;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYStateCharacterCustomizationDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedCustomizationData, meta=(AllowPrivateAccess=true))
    FYActiveCustomizationData m_activeCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveCustomizationData m_cachedLocalCreatedMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizationBodyTypeUpdated OnCustomizationSetDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedAsyncLoading OnFinishedLoadingAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_hardReferenceAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_mergedSkeletalMesh;
    
    UYStateCharacterCustomizationDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetActiveCustomizationData(FYActiveCustomizationData newData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedCustomizationData(FYActiveCustomizationData oldData);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationDataUpdated(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveInstanceDataLoaded(int32 loadHandle);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCustomizationResources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYActiveCustomizationData GetActiveCustomizationData() const;
    
};

