#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YExternalAudioFunctions.generated.h"

class AActor;
class UAudioComponent;
class USceneComponent;
class USoundBase;
class USoundConcurrency;
class USoundMix;

UCLASS(Blueprintable)
class UYExternalAudioFunctions : public UObject {
    GENERATED_BODY()
public:
    UYExternalAudioFunctions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* SpawnUISoundFromDataTable(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* SpawnSoundAttachedFromDatatable(USceneComponent* Component, const FDataTableRowHandle& rowHandle, bool keepComponentAliveAfterSoundFinished, const FString& Context, FName AttachPointName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PopSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* PlayUISoundComponent(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayUISound(UObject* contextObject, const FDataTableRowHandle& uiEventRowHandle, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayPrototypeSound(UObject* contextObject, USoundBase* prototypeSound, const FVector Location, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* PlayDTSoundOnActor(AActor* actorContext, const FDataTableRowHandle& eventRowHandle, const FString& Context, bool overrideVisibilityCulling);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* PlayDTSoundAtLocationComponent(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context, FVector Location, FRotator Orientation, bool autoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* PlayDTSoundAtLocation(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context, FVector Location, FRotator Orientation, AActor* OwningActor, float VolumeMultiplier, bool overrideVisibilityCulling);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayDTSound(UObject* contextObject, FDataTableRowHandle eventRowHandle, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static void Play2DSoundWithOwner(AActor* Owner, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetCurrentSoundMixModifiers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearSoundMixModifiers(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearSoundMixModifier(UObject* WorldContextObject, USoundMix* soundMixModifier, const FString& Context);
    
};

