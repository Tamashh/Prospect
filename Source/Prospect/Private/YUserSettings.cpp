#include "YUserSettings.h"

UYUserSettings::UYUserSettings() {
    this->ResolutionSizeX = 3440;
    this->ResolutionSizeY = 1440;
    this->LastUserConfirmedResolutionSizeX = 3440;
    this->LastUserConfirmedResolutionSizeY = 1440;
    this->FullscreenMode = 0;
    this->PreferredFullscreenMode = 0;
    this->Version = 5;
    this->FrameRateLimit = 144.0f;
    this->m_mouseSensitivity = 0.0199999996f;
    this->m_baseSensitivity = 0.0199999996f;
    this->m_adsSensitivity = 0.0199999996f;
    this->m_scopedSensitivity = 0.0199999996f;
    this->m_usePerScopeSensitivity = false;
    this->m_twoTimesScopeSensitivity = 0.0199999996f;
    this->m_fourTimesScopeSensitivity = 0.0199999996f;
    this->m_sixTimesScopeSensitivity = 0.0199999996f;
    this->m_eightTimesScopeSensitivity = 0.0199999996f;
    this->m_minSensitivityGamepad = 0.00999999978f;
    this->m_maxSensitivityGamepad = 3.0f;
    this->m_enableMouseSmoothing = false;
    this->m_enableFovBasedSensitivityScaling = true;
    this->m_masterVolume = 0.75f;
    this->m_musicVolume = 1.0f;
    this->m_VOVolume = 1.0f;
    this->m_HitMarkerVolume = 0.75f;
    this->m_sfxVolume = 1.0f;
    this->m_UISoundVolume = 1.0f;
    this->m_unfocusedVolumeMultiplier = 1.0f;
    this->m_binauralAudioActive = true;
    this->m_desiredFOV = 90.0f;
    this->m_applyFOVToScreenYAxis = false;
    this->m_allowMovementToChangeFOV = false;
    this->m_keyboardSettingsVersion = 9;
    this->m_globalSettingsVersion = 4;
    this->m_mouseSensitivityVersion = 1;
    this->m_defaultGraphicsRHI = TEXT("DefaultGraphicsRHI_DX11");
    this->m_defaultGraphicsAdapterIndex = -1;
    this->m_haveAppliedAutoGraphicSettings = false;
    this->m_wantAutoDetectSettings = false;
    this->m_useMotionBlur = true;
    this->m_imageSharpening = 0.0f;
    this->m_invertX = false;
    this->m_invertY = false;
    this->m_isRotatingMinimapEnabled = true;
    this->m_showSubtitles = true;
    this->m_isToggleInputModeEnabledForSprint = false;
    this->m_isToggleInputModeEnabledForCrouch = true;
    this->m_isToggleInputModeEnabledForTargeting = false;
    this->m_isToggleInputModeEnabledForLeaning = false;
    this->m_isQuickBuyEnabled = true;
    this->m_isHideHudShortcutEnabled = false;
    this->m_showDamageNumbersForAI = true;
    this->m_showDamageNumbersForPlayers = true;
    this->m_showCreditsOnKill = true;
    this->m_showKillIndicator = false;
    this->m_showFpsCounter = false;
    this->m_enableGpuCrashDebugging = false;
    this->m_enableDX12 = true;
    this->m_enableMultiThreadedRendering = true;
    this->m_gfxQuality = EYGfxQualityPreset::Custom;
    this->m_dlssQualityMode = UDLSSMode::Quality;
    this->m_fsrUpscalingMode = EFSRUpscalingMode::Off;
    this->m_resolutionQuality = 100.0f;
    this->m_uiScale = 0.899999976f;
    this->m_countryCode = TEXT("BE");
    this->m_voiceChatMuteInput = false;
    this->m_voiceChatMuteOutput = false;
    this->m_voiceChatInputVolume = 0.5f;
    this->m_voiceChatOutputVolume = 0.5f;
    this->m_voiceChatMicSensitivity = 0.5f;
    this->m_isChatEnabled = true;
    this->m_isInGlobalChannelEN = true;
    this->m_isInGlobalChannelGER = false;
    this->m_isInGlobalChannelRU = false;
    this->m_isInGlobalChannelFR = false;
    this->m_isInGlobalChannelES = false;
    this->m_isInGlobalChannelPTBR = false;
    this->m_isInGlobalChannelPL = false;
    this->m_isInGlobalChannelTR = false;
    this->m_isInGlobalChannelZH = false;
    this->m_isSocialNotificationsEnabled = true;
    this->m_initialChatChannelAssignment = false;
    this->m_voiceChatPushToTalk = true;
    this->m_playerMutelist = NULL;
    this->m_colorVisionDeficiency = 0;
    this->m_severity = 0.0f;
    this->m_correctDeficiency = false;
    this->m_showCorrectionWithDeficiency = false;
    this->m_gamma = 2.20000005f;
}

void UYUserSettings::ShowRestartPrompt(APlayerController* PlayerController) {
}

void UYUserSettings::SetFOVFromNormalizedValue(float normalizedFOV) {
}

void UYUserSettings::SetDefaultDXVersion(const FString& rhiSettingToApply, APlayerController* PlayerController) {
}

void UYUserSettings::RestoreHotkeyDefaults() {
}

void UYUserSettings::RestoreDefaults() {
}

void UYUserSettings::OnInputBindingsMissingDetection(bool hasMissingBindings) {
}

void UYUserSettings::OnInputBindingsConflictsDetection(bool hasConflicts) {
}

UYUserSettings* UYUserSettings::GetYUserSettings() {
    return NULL;
}

float UYUserSettings::GetNormalizedFOVValue() {
    return 0.0f;
}

FString UYUserSettings::GetGPUBrandName() {
    return TEXT("");
}

FString UYUserSettings::GetCPUVendorName() {
    return TEXT("");
}

int32 UYUserSettings::GetCPUCores() {
    return 0;
}

FString UYUserSettings::GetCPUBrandName() {
    return TEXT("");
}

UYUserSettings* UYUserSettings::Get(const FString& contextString) {
    return NULL;
}

void UYUserSettings::ApplyVoiceChatSettings(AYPlayerController* PlayerController) {
}

void UYUserSettings::ApplyUnfocusedAudioSettings() {
}

void UYUserSettings::ApplyShadowSettings() {
}

void UYUserSettings::ApplyGamma() {
}

void UYUserSettings::ApplyFoVMode(AYPlayerController* PlayerController) {
}

void UYUserSettings::ApplyFoliageSettings() {
}

void UYUserSettings::ApplyEffectsSettings() {
}

void UYUserSettings::ApplyColorblindSettings(AYPlayerController* PlayerController) {
}

void UYUserSettings::ApplyBinauralAudioActive() {
}

void UYUserSettings::ApplyAntiAliasingSettings() {
}


