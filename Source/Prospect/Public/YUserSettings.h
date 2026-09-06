#pragma once
#include "CoreMinimal.h"
#include "DLSSLibrary.h"
#include "StreamlineLibraryReflex.h"
#include "GameFramework/GameUserSettings.h"
#include "EFSRUpscalingMode.h"
#include "EYGfxQualityPreset.h"
#include "EYDLSSMode.h"
#include "EYScopeType.h"
#include "EYSensitivityMode.h"
#include "YUserSettings.generated.h"

class AActor;
class APlayerController;
class AYPlayerController;
class UYPlayerMutelist;
class UYUserSettings;

UCLASS(Blueprintable, Config=Engine)
class PROSPECT_API UYUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnHotkeysRestored);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnHotkeysResaved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsSavedMulticast, UYUserSettings*, userSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsAppliedMulticast);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGfxQualityAppliedDelegate, EYGfxQualityPreset, gfxPreset);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGfxQualityAppliedDelegate OnGfxPresetApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsAppliedMulticast OnSettingsAppliedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsSavedMulticast OnSettingsSavedMulticastDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_baseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_adsSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scopedSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_usePerScopeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_twoTimesScopeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fourTimesScopeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sixTimesScopeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_eightTimesScopeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minSensitivityGamepad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxSensitivityGamepad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableFovBasedSensitivityScaling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_masterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_musicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VOVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HitMarkerVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sfxVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UISoundVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_unfocusedVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_binauralAudioActive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_audioDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_audioInputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_desiredFOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_applyFOVToScreenYAxis;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowMovementToChangeFOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_keyboardSettingsVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_globalSettingsVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_mouseSensitivityVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_defaultGraphicsRHI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_defaultGraphicsAdapterIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_haveAppliedAutoGraphicSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wantAutoDetectSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_imageSharpening;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_invertX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_invertY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_triedEnabledDlssg;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRotatingMinimapEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showSubtitles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isToggleInputModeEnabledForSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isToggleInputModeEnabledForCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isToggleInputModeEnabledForTargeting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isToggleInputModeEnabledForLeaning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isQuickBuyEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isHideHudShortcutEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDamageNumbersForAI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDamageNumbersForPlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showCreditsOnKill;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showKillIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showFpsCounter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fpsLimitStation;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fpsLimitMatch;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableGpuCrashDebugging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableDX12;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableMultiThreadedRendering;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGfxQualityPreset m_gfxQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_nvidiaDlssEnabled;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDLSSMode m_dlssQualityMode;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dlssFrameGenerationEnabled;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dlssSharpness;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamlineReflexMode m_nvidiaReflexMode;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableDlssCommandLine;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableStreamlineCommandLine;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSRUpscalingMode m_fsrUpscalingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_uiScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_countryCode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ipAddress;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_voiceChatMuteInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_voiceChatMuteOutput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_voiceChatInputVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_voiceChatOutputVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_voiceChatMicSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelEN;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelGER;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelRU;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelFR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelES;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelPTBR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelPL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelTR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInGlobalChannelZH;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSocialNotificationsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initialChatChannelAssignment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_voiceChatPushToTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayerMutelist* m_playerMutelist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_colorVisionDeficiency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_severity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_correctDeficiency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showCorrectionWithDeficiency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gamma;
    
    UYUserSettings();

    UFUNCTION(BlueprintCallable)
    void ShowRestartPrompt(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetFOVFromNormalizedValue(float normalizedFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDXVersion(const FString& rhiSettingToApply, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RestoreHotkeyDefaults();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnInputBindingsMissingDetection(bool hasMissingBindings);
    
    UFUNCTION(BlueprintCallable)
    void OnInputBindingsConflictsDetection(bool hasConflicts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningDX12() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HideDLSSGSettingOnUI() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYUserSettings* GetYUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLSSMode GetNvidiaDlssSuperResolutionModeInternally() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNvidiaDlssFrameGenerationEnabledInternally() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNvidiaDlssEnabledInternally() const;

    UFUNCTION(BlueprintCallable)
    float GetNormalizedFOVValue();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGPUBrandName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCPUVendorName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCPUCores();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCPUBrandName();
    
    UFUNCTION(BlueprintCallable)
    static UYUserSettings* Get(const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVoiceChatSettings(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyUnfocusedAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyShadowSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ApplySensitivity(AActor* playerControllerContext, EYSensitivityMode sensitivityMode, EYScopeType scopeType);

    UFUNCTION(BlueprintCallable)
    void ApplyGamma();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFoVMode(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFoliageSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectsSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDLSSSettings();

    UFUNCTION(BlueprintCallable)
    void ApplyColorblindSettings(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBinauralAudioActive();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAntiAliasingSettings();
    
};

