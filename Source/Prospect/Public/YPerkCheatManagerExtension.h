#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YPerkCheatManagerExtension.generated.h"

UCLASS(Blueprintable)
class UYPerkCheatManagerExtension : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYPerkCheatManagerExtension();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetItemPerks(const FString& ItemId, const FName& perk1Name, float perk1Roll, const FName& perk2Name, float perk2Roll);
    
};

