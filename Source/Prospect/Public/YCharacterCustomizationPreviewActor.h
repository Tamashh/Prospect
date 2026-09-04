#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCustomizationModelType.h"
#include "YCharacterCustomizationActor.h"
#include "YCharacterCustomizationPreviewActor.generated.h"

class AActor;
class UYCharacterCustomizationModel;
class UYGlobalVanityModel;

UCLASS(Blueprintable)
class AYCharacterCustomizationPreviewActor : public AYCharacterCustomizationActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_usedExplicitModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCharacterCustomizationModel* m_model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGlobalVanityModel* m_globalVanity;
    
public:
    AYCharacterCustomizationPreviewActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTypeSet(EYCustomizationModelType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVanityUpdatedModel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEmoteWheelChanged(FDataTableRowHandle emote);
    
};

