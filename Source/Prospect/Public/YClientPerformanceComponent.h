#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YActorScore.h"
#include "YClientPerformanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYClientPerformanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActorScore> m_tokens;
    
    UYClientPerformanceComponent(const FObjectInitializer& ObjectInitializer);

};

