#pragma once
#include "CoreMinimal.h"
#include "EYClaimGeneratorIncomeStatus.h"
#include "YCustomItemInfo.h"
#include "UObject/Object.h"
#include "YOnFailedCollectingGeneratorSignatureDelegate.h"
#include "YOnGeneratorCollectionSuccessfulBackendSignatureDelegate.h"
#include "YGeneratorsManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGeneratorsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnGeneratorCollectionSuccessfulBackendSignature OnGeneratorCollectionSuccessfulBackend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFailedCollectingGeneratorSignature OnFailedCollectingGenerator;
    
    UYGeneratorsManager();

private:
    UFUNCTION(BlueprintCallable)
    void HandleFailedCollectingGenerator(const FString& generatorId, EYClaimGeneratorIncomeStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void GeneratorCrateItemsReceived(const FString& generatorId, const TArray<FYCustomItemInfo>& GrantedItems);
    
};

