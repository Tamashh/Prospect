#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EYEnvQueryHightlightMode.h"
#include "YActivityLocation.h"
#include "YActivityLocationEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class PROSPECT_API AYActivityLocationEQS : public AYActivityLocation, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitPerStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepToDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEnvQueryHightlightMode HighlightMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawLabels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawFailedItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReRunQueryOnlyOnFinishedMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeVisibleInGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickDuringGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    
    AYActivityLocationEQS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RunEQSQuery();
    

    // Fix for true pure virtual functions not being implemented
};

