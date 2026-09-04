#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "EYLinkType.h"
#include "OnEvaluatedDelegate.h"
#include "YActivityLocationEQS.h"
#include "YEvaluationResult.h"
#include "YActivityLocationLinked.generated.h"

class AYActivityLocation;
class UObject;

UCLASS(Blueprintable)
class AYActivityLocationLinked : public AYActivityLocationEQS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_linkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_scoreSpawnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, int32> m_scorePerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, int32> m_debugInfoActorsInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYLinkType m_linkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYEvaluationResult m_lastEvaluationResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvaluated BP_OnEvaluated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NetCullDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseCullDistanceOverride;
    
    AYActivityLocationLinked(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static TArray<AYActivityLocation*> RunEvaluationCheckForLocations(UObject* contextObject, EYActivityType Type);
    
    UFUNCTION(BlueprintCallable)
    FString GetLinkDebugDescription();
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateLocation();
    
    UFUNCTION(BlueprintCallable)
    void DebugUpdateRunLinkActorCheck(TArray<AYActivityLocation*>& outLinkedLocations);
    
    UFUNCTION(BlueprintCallable)
    bool DebugIsEncapsulatedByArea();
    
};

