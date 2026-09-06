#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYMatchState.h"
#include "YRebuildNavMeshReportComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYRebuildNavMeshReportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_tagWhiteListedNavMeshRebuilder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_invokeCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_invokeCountsUnauthorized;
    
    UYRebuildNavMeshReportComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNavMeshRelevantComponentUpdated(UObject* invoker);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStateUpdated(EYMatchState matchState);
    
};

