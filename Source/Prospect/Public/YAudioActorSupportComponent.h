#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YOutpostFriendInfo.h"
#include "YAudioActorSupportComponent.generated.h"

class APlayerState;
class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAudioActorSupportComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_needsInteriorUpdates;
    
public:
    UYAudioActorSupportComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadsChanged(const TArray<FYOutpostFriendInfo>& squadMemberInfos);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSetOnLocalPlayerController(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAssigned(AYPlayerState* PlayerState);
    
};

