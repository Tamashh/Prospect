#pragma once
#include "CoreMinimal.h"
#include "EYUserState.h"
#include "YPlayFabPlayerProfile.h"
#include "YUserMatchmakingSettings.h"
#include "YPlayFabSquadMember.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabSquadMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabPlayerProfile Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserState onlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUserMatchmakingSettings matchmakingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> mapRowNamesUnlocked;
    
    BACKENDMODELS_API FYPlayFabSquadMember();
};

