#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationSetCharacterSlot.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterCustomizationSetCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requested_slot;
    
    BACKENDMODELS_API FYCharacterCustomizationSetCharacterSlot();
};

