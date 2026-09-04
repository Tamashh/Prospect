#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYHitZone.h"
#include "YDealtDamageData.h"
#include "YAnimationFunctions.generated.h"

UCLASS(Blueprintable)
class UYAnimationFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAnimationFunctions();

    UFUNCTION(BlueprintCallable)
    static EYHitZone DetermineHitZoneWithZoneMapping(const FYDealtDamageData& Data, const TMap<EYHitZone, FName>& boneToHitZoneMapping);
    
};

