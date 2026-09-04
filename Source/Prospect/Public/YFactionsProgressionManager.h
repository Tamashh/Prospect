#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "UObject/Object.h"
#include "YOnFactionProgressDataReceivedSignatureDelegate.h"
#include "YFactionsProgressionManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYFactionsProgressionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFactionProgressDataReceivedSignature OnFactionProgressDataReceived;
    
    UYFactionsProgressionManager();

private:
    UFUNCTION(BlueprintCallable)
    void BroadcastUpdatedFactionProgressionData(const FYUpdatedFactionProgression& updatedFactionProgression);
    
};

