#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "OnPlayerEnteredBlendRadiusDelegate.h"
#include "OnPlayerExitedBlendRadiusDelegate.h"
#include "OnUpdatedBlendWeightDelegate.h"
#include "YMatchPhaseVisualsOverrideManager.generated.h"

class AYMatchPhaseVisualsOverrideVolume;

UCLASS(Blueprintable)
class AYMatchPhaseVisualsOverrideManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYMatchPhaseVisualsOverrideVolume*> m_visualsVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGlobalBlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_visualDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_blendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_closestVolumeBlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_blendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPlayerInsideBlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPlayerInsideVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredBlendRadius OnPlayerEnteredBlendRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedBlendRadius OnPlayerExitedBlendRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredBlendRadius OnPlayerEnteredVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedBlendRadius OnPlayerExitedVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedBlendWeight OnUpdatedBlendWeight;
    
public:
    AYMatchPhaseVisualsOverrideManager(const FObjectInitializer& ObjectInitializer);

};

