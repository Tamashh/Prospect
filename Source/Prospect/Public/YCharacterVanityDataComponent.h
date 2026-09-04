#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "YPlayerProfile.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnFinishedGlobalVanityAsyncloadedStateChangedDelegate.h"
#include "OnGlobalCustomizationEntryUpdatedDelegate.h"
#include "OnGlobalVanityUpdatedDelegate.h"
#include "OnSocialRowDelegateChangedDelegate.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "YGlobalVanityItem.h"
#include "YCharacterVanityDataComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterVanityDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveData, meta=(AllowPrivateAccess=true))
    FYActiveGlobalRuntimeVanityData m_activeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SocialProfileRow, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_socialRow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalVanityUpdated OnGlobalVanityUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedGlobalVanityAsyncloadedStateChanged OnAsyncloadingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalCustomizationEntryUpdated OnGlobalVanityEntryUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSocialRowDelegateChanged OnSocialRowChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_hardReferenedAsyncloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldAsyncloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_finishedAsyncloading;
    
    UYCharacterVanityDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetGlobalVanityRuntimeData(const FYActiveGlobalRuntimeVanityData& newData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGlobalVanityData(const FYActiveGlobalRuntimeVanityData& oldVanityData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SocialProfileRow();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveData(FYActiveGlobalRuntimeVanityData oldData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerProfileUpdated(const FYPlayerProfile& PlayerProfile);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncLoading(int32 loadHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindVanityDataItem(AActor* actorContext, EYVanityType vanityType, FYGlobalVanityItem& outData, int32 itemSlotID);
    
};

