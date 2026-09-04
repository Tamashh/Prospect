#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "YEnvQueryTest_CanRangedAttackHit.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UYEnvQueryTest_CanRangedAttackHit : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_targetContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue m_rangedAttackId;
    
    UYEnvQueryTest_CanRangedAttackHit();

};

