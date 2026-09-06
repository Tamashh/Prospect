#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "Math/Color.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Particles/WorldPSCPool.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EYFadeDirection.h"
#include "EYInputActionName.h"
#include "EYInputUIStackType.h"
#include "YDealtDamageData.h"
#include "YGameDebugState.h"
#include "YProspectExternalFunctions.generated.h"

class AActor;
class AController;
class APawn;
class APlayerController;
class APlayerState;
class AYPlayerCharacter;
class AYPlayerController;
class AYPlayerController_Match;
class AYPlayerState;
class AYWorldSettings;
class UActorComponent;
class ULocalPlayer;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class UWidget;

UCLASS(Blueprintable)
class UYProspectExternalFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYProspectExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static void ToggleInputForUMG(UWidget* focusedWidget, bool isActivate, bool uiOnly, bool showCursor, EYInputUIStackType inputUIStackType, bool needToBeForcedClosed);
    
    UFUNCTION(BlueprintCallable)
    static bool TeleportActorToSuitableLocation(AActor* actorToTeleport, FVector StartLocation, FRotator startDirection, int32 maxIteration, UObject* contextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UParticleSystemComponent* SpawnEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* emitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> SortArray(const TArray<FName>& arrayToSort);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldShowSubtitles();
    
    UFUNCTION(BlueprintCallable)
    static void SetNetAddressable(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentReplayTimeToSeconds(APlayerController* PlayerController, int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentCanEverAffectNavigation(UActorComponent* relevantComponent, bool newState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveDebugStringViewport(UObject* WorldContextObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllDebugStringsFromViewport(UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable)
    static void PrintLogError(const FString& LogString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogCylinder(UObject* WorldContextObject, const FVector& startPoint, const FVector& endpoint, float Radius, const FString& Text, FLinearColor objectColor, FName logCategory, bool bAddToMessageLog);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogCone(UObject* WorldContextObject, const FVector& originPoint, const FVector& coneDirection, float coneLength, float ConeAngle, const FString& Text, FLinearColor objectColor, FName logCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAssetsSync(const TArray<FSoftObjectPath>& assetPathsToLoad, TArray<UObject*>& outObjectsLoaded);
    
    UFUNCTION(BlueprintCallable)
    static void LeaveGame(UObject* objectContext, const FString& Reason, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWorldServer(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidEMailAddress(const FString& Email);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool isUsingNullRHI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStringContainProfanity(const UObject* contextObject, const FString& relevantString, FString& outString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSquadMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSolodMode(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSimulateInEditorInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningPIE(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRequiredCookData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsRankedMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInCylinder(const FVector& pointToTest, const FVector& StartPosition, const FVector& EndPosition, const float& Radius);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInCone(const FVector& pointToTest, const FVector& conePosition, const FVector& coneDirection, const float& coneRadius, const float& ConeAngle);

    UFUNCTION(BlueprintCallable)
    static bool IsPlayerInAir(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsModsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInCinematicMode(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameInstanceExistingInWorld(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsFirstLogin(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDuoMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsDemoPlaying(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChatInputEnabled(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllowedToPlayEffects(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorLocallyControlled(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActivePlayer(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool HasTrophy(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool HasEscaped(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<AYPlayerCharacter*> GetPlayersWithinDistance(UObject* WorldContext, FVector Location, float Min, float Max);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetPlayerCharactersInRadius(UObject* WorldContext, FVector Location, float Radius, TArray<AYPlayerCharacter*>& outPlayerCharacters);
    
    UFUNCTION(BlueprintCallable)
    static float GetPawnHalfHeight(const APawn* relevantPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetNativeClassFromObject(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static EYMatchmakeGameModeType GetMatchmakingTypeFromString(const FString& gameModeAsFString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EYMatchmakeGameModeType GetMatchmakeGameModeType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetGravityZ(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetGCBudget(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetFocusedWidget(UObject* WorldContextObject, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetDistanceToForLocalPlayer(UObject* WorldContext, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentReplayCurrentTimeInSeconds(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetCurrentPlayerCount(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetCurrentActivePlayerCount(const UObject* WorldContext);

    UFUNCTION(BlueprintCallable)
    static bool GetComponentCanEverAffectNavigation(UActorComponent* relevantComponent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AYPlayerCharacter*> GetCharactersInRange(UObject* Context, const FVector& Location, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCauseOfDeathData(AActor* actorContext, FYDealtDamageData& deathData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetAllPlayerCharacters(UObject* WorldContext, TArray<AYPlayerCharacter*>& outPlayerCharacters);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAICharacterCount(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ForceNullptrCrashBlueprintCallable();

    UFUNCTION(BlueprintCallable)
    static AYWorldSettings* FindYWorldSettings(UObject* contextObject, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static AYPlayerState* FindYPlayerState(AActor* actorContext, const FString& contextString, bool logOnFailure);
    
    UFUNCTION(BlueprintCallable)
    static FString FindTagsFromActor(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AYPlayerController* FindRelevantPlayerControllerConst(const UObject* WorldContext, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AYPlayerController* FindRelevantPlayerController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APawn* FindRelevantPawn(UObject* WorldContext, bool logOnFailure);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AYPlayerController_Match* FindRelevantLocalYPlayerControllerMatch(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ULocalPlayer* FindRelevantLocalPlayer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FDataTableRowHandle FindRelevantDataTableRowHandleFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindRelevantControllerLocationDirection(UObject* WorldContext, FVector& OutLocation, FVector& outDirection, const FString& Context, bool logOnFailure);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AController* FindRelevantController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static APlayerController* FindRelevantBasePlayerController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal);
    
    UFUNCTION(BlueprintCallable)
    static FUniqueNetIdRepl FindPlayerUniqueId(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    static AYPlayerState* FindPlayerStateFromActorAndOwner(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static APlayerState* FindPlayerStateBase(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FindPlayerNameFromContext(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable)
    static FText FindPlayerNameAsText(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FindPlayerNameAsString(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindPlayerLocation(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static AYPlayerController* FindPlayerController(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static AYPlayerCharacter* FindPlayerCharacterFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static AYPlayerCharacter* FindPlayerCharacter(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AYPlayerState* FindLocalPlayerState(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerController* FindLocalPlayerController(UObject* WorldContextObject, const FString& Context, bool logOnError);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindLocalControllerID(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AYPlayerController* FindInstigatingPlayerControllerFromDamageData(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    static FText FindFirstKeyBoundToInputAction(UObject* objectContext, EYInputActionName inputType, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void FindDebugState(UObject* WorldContextObject, FYGameDebugState& outDebugState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FindContextMapName(const UObject* contextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestBone(USceneComponent* componentHit, const FVector& locationContext, bool onlyConsiderBonesWithPhysicsBody);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestActorToLocation(FVector Location, TArray<AActor*> actors);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllRelevantPlayerControllersNetRelevant(AActor* netRelevantActor, TArray<APlayerController*>& outControllers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FindAllRelevantPlayerControllers(UObject* WorldContext, TArray<APlayerController*>& outControllers);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer FindAllGameplayTagChildren(const FGameplayTag& parentTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Fade(UObject* WorldContextObject, float Duration, EYFadeDirection fadeDirection, const FString& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 DrawDebugStringViewport(UObject* WorldContextObject, const FString& Text, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertStringToFDateTime(const FString& inDateTime, FDateTime& outDateTime, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearFade(UObject* WorldContextObject);
    
};

