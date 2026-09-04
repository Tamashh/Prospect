#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "EYAudioEffectZoneBoundsType.h"
#include "YAudioEffectZoneDataType.h"
#include "YAudioEffectZoneInstanceData.h"
#include "YAudioEffectZoneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAudioEffectZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAudioEffectZoneDataType m_audioEffectZoneData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EYAudioEffectZoneBoundsType m_boundsType;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> m_trackedStaticMeshDataArray;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FYAudioEffectZoneInstanceData> m_connectedActors;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    FVector m_trackedStaticMeshLocation;
    
public:
    UYAudioEffectZoneComponent(const FObjectInitializer& ObjectInitializer);

};

