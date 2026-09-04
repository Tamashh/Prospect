#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YGlobalAudio.generated.h"

class UAudioComponent;
class UWorld;

UCLASS(Blueprintable)
class PROSPECT_API UYGlobalAudio : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_worldMusicComponent;
    
    UYGlobalAudio();

    UFUNCTION(BlueprintCallable)
    void OnInit(UWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyAboutDropPodIntroStateChanged(const UObject* WorldContext, bool Started);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStationSceneOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStationSceneClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchJoined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLoadingScreenStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeavingEndOfMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnteredEndOfMatch(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDropPodIntroStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDropPodIntroSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDropPodIntroEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCharacterSelectionStart();
    
};

