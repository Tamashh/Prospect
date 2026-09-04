#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "YAISenseConfig_AllyAlert.generated.h"

class UYAISense_AllyAlert;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class UYAISenseConfig_AllyAlert : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYAISense_AllyAlert> m_implementationClass;
    
    UYAISenseConfig_AllyAlert();

};

