#pragma once
#include "CoreMinimal.h"
#include "EYClaimGeneratorIncomeStatus.h"
#include "Components/ActorComponent.h"
#include "YInventoryItem.h"
#include "YOnFailedCollectGeneratorSignatureDelegate.h"
#include "YOnGeneratorCollectionSuccessfulSignatureDelegate.h"
#include "YPlayerPassiveGeneratorsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerPassiveGeneratorsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnGeneratorCollectionSuccessfulSignature OnGeneratorCollectionSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFailedCollectGeneratorSignature OnFailedCollectGenerator;
    
    UYPlayerPassiveGeneratorsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnFailedCollectingGenerator(const FString& generatorId, const EYClaimGeneratorIncomeStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void DailyCrateCollectionSuccess(const FString& generatorId, const TArray<FYInventoryItem>& crateItems);
    
};

