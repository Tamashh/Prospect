#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YPlayerStartCluster.h"
#include "YGamePlayerStartComponent.generated.h"

class UObject;
class UYGamePlayerStartComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYGamePlayerStartComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_defaultPieMapInfo;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerStartCluster> m_clusters;
    
public:
    UYGamePlayerStartComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYGamePlayerStartComponent* FindGamePlayerStartComponent(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindClusters(int32 minSize, TArray<FYPlayerStartCluster>& outClusters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerStartCluster FindBestScoredPlayerStartCluster(const TArray<FYPlayerStartCluster>& clusters, int32& outScore) const;
    
};

