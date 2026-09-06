#pragma once
#include "CoreMinimal.h"
#include "YMessage.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "EYInputActionName.h"
#include "EYInputUIStackType.h"
#include "OnInputMasterWidgetSignatureDelegate.h"
#include "OnInputStackChangedDelegate.h"
#include "OnMatchmakingResponseCallbackDelegate.h"
#include "OnPlayerControllerCollectedLootDirectlyDelegate.h"
#include "YFeatureToggles.h"
#include "YInventoryItem.h"
#include "YPlayerController.generated.h"

class AController;
class APlayerState;
class AYHUD;
class AYPlayerCharacter;
class AYPlayerController;
class UActorComponent;
class UInputComponent;
class UPrimitiveComponent;
class UWidget;
class UYControllerCheatSimComponent;
class UYControllerGeneratorsComponent;
class UYControllerInventoryBackendComponent;
class UYControllerInventoryInsuranceComponent;
class UYControllerInventoryRuntimeComponent;
class UYControllerLoadoutPresetComponent;
class UYControllerNewsComponent;
class UYControllerPlayerMapMarkerComponent;
class UYControllerPlayerQuarterComponent;
class UYControllerQuestComponent;
class UYControllerReleaseNotesComponent;
class UYControllerStateInputComponent;
class UYControllerTravelComponent;
class UYControllerVictimCompensationComponent;
class UYPlayerFactionsProgressionComponent;
class UYPlayerInitializationComponent;
class UYVivoxComponent;

UCLASS(Blueprintable, Config=Engine)
class AYPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreDestroy, AYPlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateSet, APlayerState*, State);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNetCleanup, APlayerState*, State);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCommWheelSelectedSignature, const FYMessage&, commWheelMessage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChatPressedSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputStackChanged OnInputStackChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_genericInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerPlayerMapMarkerComponent* m_mapmarkerComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingResponseCallback OnMatchmakingResponseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* m_parentController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYVivoxComponent* m_vivoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerInitializationComponent* m_initializationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryBackendComponent* m_controllerInventoryBackendComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerStateInputComponent* m_inputControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerQuestComponent* m_questComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerPlayerQuarterComponent* m_playerQuarterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerGeneratorsComponent* m_controllerGeneratorsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryRuntimeComponent* m_controllerInventoryRuntimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryInsuranceComponent* m_controllerInventoryInsuranceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerVictimCompensationComponent* m_controllerVictimCompensationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerFactionsProgressionComponent* m_playerFactionsProgressionComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputMasterWidgetSignature OnInputToggleMasteDebugWidgetBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerControllerCollectedLootDirectly OnItemAddedToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChatPressedSignature OnChatInputPressedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCommWheelSelectedSignature OnCommWheelSelectedSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetCleanup OnNetCleanupDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreDestroy OnPreDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> m_debugComponentClassReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_preMatchInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_inMatchInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_endOfMatchInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_uiInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerReleaseNotesComponent* m_releaseNoteComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_analogCursorAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_analogCursorMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_analogCursorStickySlowdown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bugreporterOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerTravelComponent* m_travelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerNewsComponent* m_newsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerLoadoutPresetComponent* m_loadoutPresetComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerCheatSimComponent* m_cheatSimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldStashBeHighlightedForDragAndDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldBackpackBeHighlightedForDragAndDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldSafePocketsBeHighlightedForDragAndDrop;
    
    AYPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SyncServerTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void SimulateInputAxis(FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SimulateInput(EYInputActionName inputActionName, TEnumAsByte<EInputEvent> inputType) const;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendConsoleCommand(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestServerTime(APlayerController* requester, float requestWorldTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateDebugComponent();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCrashMe(float Timer, const FString& Msg) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ServerCommand(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SendAnnouncement(const FString& announcement) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SC(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReconnectMe();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleBugReporter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFrontendCheatDetectionSettingsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBugreportDataSaved() const;
    
    UFUNCTION(BlueprintCallable)
    void OnBugreportDataRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerCharacter* GetYPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYHUD* GetYHUD() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsChatEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FlushPressedActionKeys(EYInputActionName inputAction) const;
    
    UFUNCTION(BlueprintCallable)
    void FlushAllPressedKeys();
    
    UFUNCTION(BlueprintCallable)
    void EnterMatch();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInputForUMG(const FString& contextString, UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashServer(float Timer, const FString& Msg) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashMe(float Timer, const FString& Msg) const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportServerTime(float requestWorldTime, float serverTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_OnItemAddedToInventory(const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_OnTryConsumeEscapeKey();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToHiddenPrimitiveComponents(UPrimitiveComponent* componenetToHide);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInputForUMG_BP(UWidget* WidgetToFocus, bool showCursor, bool uiOnly, bool hideCursorDuringCapture, EYInputUIStackType stackType);
    
};

