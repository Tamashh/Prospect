#pragma once
#include "CoreMinimal.h"
#include "YGameModeBase.h"
#include "YGameMode_Station.generated.h"

class UYMissionGameManagerComponent;

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API AYGameMode_Station : public AYGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMissionGameManagerComponent* m_missionManagerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeUntilStationShutdownNoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeUntilStationShutdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeStampHadPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_requestedEnd;
    
public:
    AYGameMode_Station(const FObjectInitializer& ObjectInitializer);

};

