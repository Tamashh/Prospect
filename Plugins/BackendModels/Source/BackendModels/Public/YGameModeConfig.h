#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YGameModeConfig.generated.h"

USTRUCT(BlueprintType)
struct FYGameModeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRanked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isTournamentMode;
    
    BACKENDMODELS_API FYGameModeConfig();
};

