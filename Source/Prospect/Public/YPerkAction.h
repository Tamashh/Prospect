#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYItemStatsType.h"
#include "YPerkActivationData.h"
#include "YPerkAction.generated.h"

class AYPlayerCharacter;
class AYPlayerController_Match;

UCLASS(Abstract, Blueprintable)
class PROSPECT_API UYPerkAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_owningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerController_Match* m_owningPlayerController;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsType m_statsType;
    
    UYPerkAction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAction(FYPerkActivationData activationData);
    
};

