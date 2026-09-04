#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/DataTable.h"
#include "EYActivityType.h"
#include "EYDebugActivitySpawnMode.h"
#include "YActivities_DeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=YDeveloperSettings)
class PROSPECT_API UYActivities_DeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDebugActivitySpawnMode m_debugSpawnActivityMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_debugSet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYActivityType> m_debugActivities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableRandomSeedOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_randomizationSeed;
    
    UYActivities_DeveloperSettings();

};

