#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationActor.h"
#include "YCharacterVisualizationRuntimeData.h"
#include "YCustomizationExplicitActorInitializationData.h"
#include "YCharacterCustomizationExplicitCustomizationActor.generated.h"

UCLASS(Blueprintable)
class AYCharacterCustomizationExplicitCustomizationActor : public AYCharacterCustomizationActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cameraSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_previewCameraSuffix;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCustomizationExplicitActorInitializationData m_initializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_registerCustomizationModeAssociation;
    
public:
    AYCharacterCustomizationExplicitCustomizationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCharacterCustomizationLoadedCallback();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVisualziationState(FYCharacterVisualizationRuntimeData Data);
    
};

