#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EYKeybindingInputDeviceType.h"
#include "YDataTableRowBase.h"
#include "YKeyPlatformData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYKeyPlatformData : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYKeybindingInputDeviceType, TSoftObjectPtr<UTexture2D>> Icons;
    
    PROSPECT_API FYKeyPlatformData();
};

