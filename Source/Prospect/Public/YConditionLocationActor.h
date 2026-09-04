#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YActorWithMapCheck.h"
#include "YConditionLocationActor.generated.h"

class ATriggerVolume;

UCLASS(Blueprintable)
class PROSPECT_API AYConditionLocationActor : public AYActorWithMapCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerVolume*> m_linkedTriggerVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    AYConditionLocationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugInfo();
    
};

