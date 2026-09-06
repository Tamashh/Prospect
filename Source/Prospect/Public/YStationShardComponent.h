#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerShardData.h"
#include "YStationShardComponent.generated.h"

class AActor;
class UObject;
class UYStationShardComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYStationShardComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerShardData> m_playerShardData;

public:
    UYStationShardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsOnlyRelevantToSelf(AActor* relevantActor, bool newState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYStationShardComponent* FindStationShardComponent(UObject* WorldContext);

};

