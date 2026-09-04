#pragma once
#include "CoreMinimal.h"
#include "YPlayerStateBase.h"
#include "YPlayerState_Outpost.generated.h"

UCLASS(Blueprintable, Config=Game)
class AYPlayerState_Outpost : public AYPlayerStateBase {
    GENERATED_BODY()
public:
    AYPlayerState_Outpost(const FObjectInitializer& ObjectInitializer);

};

