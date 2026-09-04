#pragma once
#include "CoreMinimal.h"
#include "YCodeConventionBlueprintVarGroup.generated.h"

USTRUCT(BlueprintType)
struct FYCodeConventionBlueprintVarGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTraceVolumeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTraceVolumeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCameraWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWeaponWidget;
    
    YCONVENTIONPLUGIN_API FYCodeConventionBlueprintVarGroup();
};

