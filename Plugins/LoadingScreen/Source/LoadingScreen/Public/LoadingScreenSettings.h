#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Fonts/SlateFontInfo.h"
#include "LoadingScreenDescription.h"
#include "LoadingScreenSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LOADINGSCREEN_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFirstLoginVideo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription SpinupScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription DefaultSpinupScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription SeamlessTravelScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription TutorialLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription StationMapLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription FirstMapLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenDescription SecondMapLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TipFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo LoadingFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipWrapAt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Tips;
    
    ULoadingScreenSettings();

};

