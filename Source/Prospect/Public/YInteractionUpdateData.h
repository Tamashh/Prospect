#pragma once
#include "CoreMinimal.h"
#include "EYInteractionUpdateType.h"
#include "YPlayerInteraction.h"
#include "YInteractionUpdateData.generated.h"

class UYPlayerInteractionComponent;

USTRUCT(BlueprintType)
struct FYInteractionUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerInteractionComponent* m_playerInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInteraction m_interactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInteractionUpdateType m_interactionUpdateType;
    
    PROSPECT_API FYInteractionUpdateData();
};

