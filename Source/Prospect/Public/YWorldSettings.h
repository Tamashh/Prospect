#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "EYMapType.h"
#include "YWorldSettings.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class PROSPECT_API AYWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_mapHaveLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMapType m_mapTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* m_tutorialStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_infoDebugString;
    
    AYWorldSettings(const FObjectInitializer& ObjectInitializer);

};

