#pragma once
#include "CoreMinimal.h"
#include "YHUD.h"
#include "YHUD_Outpost.generated.h"

UCLASS(Blueprintable, NonTransient)
class AYHUD_Outpost : public AYHUD {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTraveledFrom, const FString&, prevMapName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTraveledFrom OnPlayerTraveledFrom;
    
    AYHUD_Outpost(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ProcessTravelOrNetworkFailure();
    
};

