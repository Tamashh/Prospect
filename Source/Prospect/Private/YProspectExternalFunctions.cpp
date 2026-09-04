#include "YProspectExternalFunctions.h"

UYProspectExternalFunctions::UYProspectExternalFunctions() {
}

void UYProspectExternalFunctions::ToggleInputForUMG(UWidget* focusedWidget, bool isActivate, bool uiOnly, bool showCursor, EYInputUIStackType inputUIStackType, bool needToBeForcedClosed) {
}

bool UYProspectExternalFunctions::TeleportActorToSuitableLocation(AActor* actorToTeleport, FVector StartLocation, FRotator startDirection, int32 maxIteration, UObject* contextObject) {
    return false;
}

UParticleSystemComponent* UYProspectExternalFunctions::SpawnEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* emitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
    return NULL;
}

TArray<FName> UYProspectExternalFunctions::SortArray(const TArray<FName>& arrayToSort) {
    return TArray<FName>();
}

bool UYProspectExternalFunctions::ShouldShowSubtitles() {
    return false;
}

bool UYProspectExternalFunctions::ShouldIgnoreDeathForPlacement(UObject* WorldContextObject) {
    return false;
}

void UYProspectExternalFunctions::SetNetAddressable(UActorComponent* ActorComponent) {
}

void UYProspectExternalFunctions::SetCurrentReplayTimeToSeconds(APlayerController* PlayerController, int32 Seconds) {
}

void UYProspectExternalFunctions::SetCurrentReplayPlayRate(APlayerController* PlayerController, float PlayRate) {
}

void UYProspectExternalFunctions::SetComponentCanEverAffectNavigation(UActorComponent* relevantComponent, bool newState) {
}

void UYProspectExternalFunctions::RemoveDebugStringViewport(UObject* WorldContextObject, int32 Handle) {
}

void UYProspectExternalFunctions::PrintLogError(const FString& LogString) {
}

void UYProspectExternalFunctions::LogMessageWithBPAndNativeStackVerySlow(const FString& logMessageString, int32 stackLength) {
}

void UYProspectExternalFunctions::LoadAssetsSync(const TArray<FSoftObjectPath>& assetPathsToLoad, TArray<UObject*>& outObjectsLoaded) {
}

void UYProspectExternalFunctions::LeaveGame(UObject* objectContext, const FString& Reason, const FString& contextString) {
}

bool UYProspectExternalFunctions::IsWorldServer(const UObject* objectContext) {
    return false;
}

bool UYProspectExternalFunctions::isUsingNullRHI() {
    return false;
}

bool UYProspectExternalFunctions::IsStringContainProfanity(const UObject* contextObject, const FString& relevantString, FString& outString) {
    return false;
}

bool UYProspectExternalFunctions::IsStation(const UObject* WorldContextObject) {
    return false;
}

bool UYProspectExternalFunctions::IsSquadMode(UObject* WorldContextObject) {
    return false;
}

bool UYProspectExternalFunctions::IsSolodMode(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::IsSimulateInEditorInProgress(UObject* WorldContextObject) {
    return false;
}

bool UYProspectExternalFunctions::IsShipping() {
    return false;
}

bool UYProspectExternalFunctions::IsRunningPIE(const UObject* objectContext) {
    return false;
}

bool UYProspectExternalFunctions::IsRequiredCookData() {
    return false;
}

bool UYProspectExternalFunctions::IsRankedMode(UObject* WorldContextObject) {
    return false;
}

bool UYProspectExternalFunctions::IsPlayerInAir(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::IsModsEnabled() {
    return false;
}

bool UYProspectExternalFunctions::IsInCinematicMode(UObject* objectContext) {
    return false;
}

bool UYProspectExternalFunctions::IsGameModeType(UObject* WorldContextObject, EYMatchmakeGameModeType gameModeType) {
    return false;
}

bool UYProspectExternalFunctions::IsGameInstanceExistingInWorld(const UObject* objectContext) {
    return false;
}

bool UYProspectExternalFunctions::IsFirstLogin(UObject* WorldContext) {
    return false;
}

bool UYProspectExternalFunctions::IsEditor() {
    return false;
}

bool UYProspectExternalFunctions::IsDuoMode(UObject* WorldContextObject) {
    return false;
}

bool UYProspectExternalFunctions::IsDemoPlaying(UObject* WorldContext) {
    return false;
}

bool UYProspectExternalFunctions::IsChatInputEnabled(UObject* objectContext) {
    return false;
}

bool UYProspectExternalFunctions::IsAllowedToPlayEffects(const UObject* Context) {
    return false;
}

bool UYProspectExternalFunctions::IsActorLocallyControlled(AActor* Actor) {
    return false;
}

bool UYProspectExternalFunctions::IsActivePlayer(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::HasTrophy(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::HasRedTrophy(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::HasGreenTrophy(AActor* actorContext) {
    return false;
}

bool UYProspectExternalFunctions::HasEscaped(AActor* actorContext) {
    return false;
}

int32 UYProspectExternalFunctions::GetSlateLayoutCachingValue() {
    return 0;
}

float UYProspectExternalFunctions::GetPawnHalfHeight(const APawn* relevantPawn) {
    return 0.0f;
}

UClass* UYProspectExternalFunctions::GetNativeClassFromObject(const UObject* objectContext) {
    return NULL;
}

EYMatchmakeGameModeType UYProspectExternalFunctions::GetMatchmakingTypeFromString(const FString& gameModeAsFString) {
    return EYMatchmakeGameModeType::NONE;
}

EYMatchmakeGameModeType UYProspectExternalFunctions::GetMatchmakeGameModeType(UObject* WorldContextObject) {
    return EYMatchmakeGameModeType::NONE;
}

float UYProspectExternalFunctions::GetGravityZ(UObject* WorldContextObject) {
    return 0.0f;
}

float UYProspectExternalFunctions::GetGCBudget(UObject* WorldContext) {
    return 0.0f;
}

bool UYProspectExternalFunctions::GetGameModeName(UObject* WorldContextObject, const FString& Context, FString& outGameModeName) {
    return false;
}

FString UYProspectExternalFunctions::GetFocusedWidget(UObject* WorldContextObject, int32 UserIndex) {
    return TEXT("");
}

int32 UYProspectExternalFunctions::GetCurrentReplayTotalTimeInSeconds(APlayerController* PlayerController) {
    return 0;
}

int32 UYProspectExternalFunctions::GetCurrentReplayCurrentTimeInSeconds(APlayerController* PlayerController) {
    return 0;
}

int32 UYProspectExternalFunctions::GetCurrentPlayerCount(const UObject* WorldContext) {
    return 0;
}

bool UYProspectExternalFunctions::GetComponentCanEverAffectNavigation(UActorComponent* relevantComponent) {
    return false;
}

TArray<AYPlayerCharacter*> UYProspectExternalFunctions::GetCharactersInRange(UObject* Context, const FVector& Location, int32 Range) {
    return TArray<AYPlayerCharacter*>();
}

bool UYProspectExternalFunctions::GetCauseOfDeathData(AActor* actorContext, FYDealtDamageData& deathData) {
    return false;
}

int32 UYProspectExternalFunctions::GetAICharacterCount(const UObject* WorldContext) {
    return 0;
}

AYWorldSettings* UYProspectExternalFunctions::FindYWorldSettings(UObject* contextObject, const FString& contextString) {
    return NULL;
}

AYPlayerState* UYProspectExternalFunctions::FindYPlayerState(AActor* actorContext, const FString& contextString, bool logOnFailure) {
    return NULL;
}

FString UYProspectExternalFunctions::FindTagsFromActor(AActor* relevantActor) {
    return TEXT("");
}

AYPlayerController* UYProspectExternalFunctions::FindRelevantPlayerControllerConst(const UObject* WorldContext, const FString& Context) {
    return NULL;
}

AYPlayerController* UYProspectExternalFunctions::FindRelevantPlayerController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal) {
    return NULL;
}

APawn* UYProspectExternalFunctions::FindRelevantPawn(UObject* WorldContext, bool logOnFailure) {
    return NULL;
}

AYPlayerController_Match* UYProspectExternalFunctions::FindRelevantLocalYPlayerControllerMatch(UObject* WorldContextObject, const FString& Context) {
    return NULL;
}

ULocalPlayer* UYProspectExternalFunctions::FindRelevantLocalPlayer(UObject* WorldContext) {
    return NULL;
}

FDataTableRowHandle UYProspectExternalFunctions::FindRelevantDataTableRowHandleFromActor(AActor* Actor) {
    return FDataTableRowHandle{};
}

bool UYProspectExternalFunctions::FindRelevantControllerLocationDirection(UObject* WorldContext, FVector& OutLocation, FVector& outDirection, const FString& Context, bool logOnFailure) {
    return false;
}

AController* UYProspectExternalFunctions::FindRelevantController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal) {
    return NULL;
}

APlayerController* UYProspectExternalFunctions::FindRelevantBasePlayerController(UObject* WorldContext, const FString& Context, bool logOnFailure, bool ignoreLocal) {
    return NULL;
}

FUniqueNetIdRepl UYProspectExternalFunctions::FindPlayerUniqueId(AActor* Player) {
    return FUniqueNetIdRepl{};
}

AYPlayerState* UYProspectExternalFunctions::FindPlayerStateFromActorAndOwner(AActor* actorContext) {
    return NULL;
}

APlayerState* UYProspectExternalFunctions::FindPlayerStateByPlayerName(AActor* actorContext, const FString& playerName) {
    return NULL;
}

APlayerState* UYProspectExternalFunctions::FindPlayerStateBase(AActor* actorContext) {
    return NULL;
}

FString UYProspectExternalFunctions::FindPlayerNameFromContext(AActor* relevantActor) {
    return TEXT("");
}

FText UYProspectExternalFunctions::FindPlayerNameAsText(AActor* actorContext) {
    return FText::GetEmpty();
}

FString UYProspectExternalFunctions::FindPlayerNameAsString(AActor* actorContext) {
    return TEXT("");
}

FVector UYProspectExternalFunctions::FindPlayerLocation(AActor* actorContext) {
    return FVector{};
}

AYPlayerController* UYProspectExternalFunctions::FindPlayerController(UObject* objectContext) {
    return NULL;
}

AYPlayerCharacter* UYProspectExternalFunctions::FindPlayerCharacterFromObject(UObject* Object) {
    return NULL;
}

AYPlayerCharacter* UYProspectExternalFunctions::FindPlayerCharacter(AActor* actorContext) {
    return NULL;
}

AYPlayerState* UYProspectExternalFunctions::FindLocalPlayerState(UObject* WorldContextObject, const FString& Context) {
    return NULL;
}

APlayerController* UYProspectExternalFunctions::FindLocalPlayerController(UObject* WorldContextObject, const FString& Context, bool logOnError) {
    return NULL;
}

int32 UYProspectExternalFunctions::FindLocalControllerID(UObject* objectContext) {
    return 0;
}

AYPlayerController* UYProspectExternalFunctions::FindInstigatingPlayerControllerFromDamageData(const FYDealtDamageData& Data) {
    return NULL;
}

FText UYProspectExternalFunctions::FindFirstKeyBoundToInputAction(UObject* objectContext, EYInputActionName inputType, const FString& contextString) {
    return FText::GetEmpty();
}

void UYProspectExternalFunctions::FindDebugState(UObject* WorldContextObject, FYGameDebugState& outDebugState) {
}

FString UYProspectExternalFunctions::FindContextMapName(const UObject* contextObject) {
    return TEXT("");
}

FName UYProspectExternalFunctions::FindClosestBone(USceneComponent* componentHit, const FVector& locationContext, bool onlyConsiderBonesWithPhysicsBody) {
    return NAME_None;
}

AActor* UYProspectExternalFunctions::FindClosestActorToLocation(FVector Location, TArray<AActor*> actors) {
    return NULL;
}

void UYProspectExternalFunctions::FindAllRelevantPlayerControllersNetRelevant(AActor* netRelevantActor, TArray<APlayerController*>& outControllers) {
}

void UYProspectExternalFunctions::FindAllRelevantPlayerControllers(UObject* WorldContext, TArray<APlayerController*>& outControllers) {
}

void UYProspectExternalFunctions::FindAllModsForModType(UObject* objectContext, EYModificationSlotType modType, TArray<FName>& OutNames) {
}

FGameplayTagContainer UYProspectExternalFunctions::FindAllGameplayTagChildren(const FGameplayTag& parentTag) {
    return FGameplayTagContainer{};
}

void UYProspectExternalFunctions::Fade(UObject* WorldContextObject, float Duration, EYFadeDirection fadeDirection, const FString& Context) {
}

int32 UYProspectExternalFunctions::DrawDebugStringViewport(UObject* WorldContextObject, const FString& Text, FColor Color) {
    return 0;
}

bool UYProspectExternalFunctions::ConvertStringToFDateTime(const FString& inDateTime, FDateTime& outDateTime, const FString& contextString) {
    return false;
}

FText UYProspectExternalFunctions::ConvertGamemodeTypeEnumToFText(UObject* worldCtxObj, EYMatchmakeGameModeType gameModeType) {
    return FText::GetEmpty();
}

void UYProspectExternalFunctions::ClearFade(UObject* WorldContextObject) {
}


