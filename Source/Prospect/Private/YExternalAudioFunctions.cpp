#include "YExternalAudioFunctions.h"

UYExternalAudioFunctions::UYExternalAudioFunctions() {
}

UAudioComponent* UYExternalAudioFunctions::SpawnUISoundFromDataTable(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context) {
    return NULL;
}

UAudioComponent* UYExternalAudioFunctions::SpawnSoundAttachedFromDatatable(USceneComponent* Component, const FDataTableRowHandle& rowHandle, bool keepComponentAliveAfterSoundFinished, const FString& Context, FName AttachPointName) {
    return NULL;
}

void UYExternalAudioFunctions::SetSoundMixClassOverrideYager(const UObject* contextHelperObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
}

void UYExternalAudioFunctions::PushSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context) {
}

void UYExternalAudioFunctions::PopSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context) {
}

UAudioComponent* UYExternalAudioFunctions::PlayUISoundComponent(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context) {
    return NULL;
}

void UYExternalAudioFunctions::PlayUISound(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context) {
}

void UYExternalAudioFunctions::PlayPrototypeSound(UObject* contextObject, USoundBase* prototypeSound, const FVector Location, const FString& Context) {
}

UAudioComponent* UYExternalAudioFunctions::PlayDTSoundOnActor(AActor* actorContext, const FDataTableRowHandle& eventRowHandle, const FString& Context, bool overrideVisibilityCulling) {
    return NULL;
}

UAudioComponent* UYExternalAudioFunctions::PlayDTSoundAtLocationComponent(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context, FVector Location, FRotator Orientation, bool autoDestroy) {
    return NULL;
}

UAudioComponent* UYExternalAudioFunctions::PlayDTSoundAtLocation(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context, FVector Location, FRotator Orientation, AActor* OwningActor, float VolumeMultiplier, bool overrideVisibilityCulling) {
    return NULL;
}

void UYExternalAudioFunctions::PlayDTSound(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context) {
}

void UYExternalAudioFunctions::Play2DSoundWithOwner(AActor* Owner, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, USoundConcurrency* ConcurrencySettings) {
}

TArray<FString> UYExternalAudioFunctions::GetCurrentSoundMixModifiers(const UObject* WorldContextObject) {
    return TArray<FString>();
}

void UYExternalAudioFunctions::ClearSoundMixModifiers(UObject* WorldContextObject, const FString& Context) {
}

void UYExternalAudioFunctions::ClearSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context) {
}


