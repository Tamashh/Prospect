#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYAudioEffectZoneBoundsType.h"
#include "YAudioEffectZoneDataType.h"
#include "YAudioEffectZoneManagerComponent.generated.h"

class AActor;
class UPhysicalMaterial;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAudioEffectZoneManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_actorsInsideEffectZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_audioEffectZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_playerAudioZoneSampleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicalMaterial*, FYAudioEffectZoneDataType> m_physicsMaterialDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, EYAudioEffectZoneBoundsType> m_staticMeshBoundsTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_debugDisplayEffectZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_debugDisplaySoundLocations;
    
public:
    UYAudioEffectZoneManagerComponent(const FObjectInitializer& ObjectInitializer);

};

