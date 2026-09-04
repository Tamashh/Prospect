#pragma once
#include "CoreMinimal.h"
#include "EYCustomDepthStencilValues.generated.h"

UENUM(BlueprintType)
enum EYCustomDepthStencilValues {
    Stencil_None,
    Stencil_SquadOutline,
    Stencil_HunterVision,
    Stencil_Interaction = 4,
    Stencil_Custom1 = 8,
    Stencil_Custom2 = 16,
    Stencil_Custom3 = 32,
    Stencil_Custom4 = 64,
    Stencil_Custom5 = 128,
};

