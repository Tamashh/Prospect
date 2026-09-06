#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YSoundInfo.h"
#include "YPlayerAudioReplicationComponent.generated.h"

class UObject;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerAudioReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_soundsAlwaysLoaded;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_soundsLoaded;

    UYPlayerAudioReplicationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void ReplicateSoundToPlayers(UObject* Context, const FYSoundInfo& Info, float minReplicatingDistance, float maxReplicatingDistance);

    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlaySoundInfo(const FYSoundInfo& Sound);

};
