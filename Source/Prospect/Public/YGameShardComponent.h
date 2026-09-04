#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerShardData.h"
#include "YGameShardComponent.generated.h"

class AActor;
class UObject;
class UYGameShardComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYGameShardComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerShardData> m_playerShardData;
    
public:
    UYGameShardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsOnlyRelevantToSelf(AActor* relevantActor, bool newState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYGameShardComponent* FindGameShardComponent(UObject* WorldContext);
    
};

