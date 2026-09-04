#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "EYMatchmakingResult.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYMatchMapDifficulty.h"
#include "YMapUnlockStatus.h"
#include "YMatchmakingSetupEntry.h"
#include "YMatchmakingSetupMatchEntry.h"
#include "YMatchmakingSetupRow.h"
#include "YMatchmakingFunctionsLibrary.generated.h"

class UDataTable;
class UYMatchmakingManager;

UCLASS(Blueprintable)
class PROSPECT_API UYMatchmakingFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYMatchmakingFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetSelectedMapId(const UObject* objectContext, const FName& mapInfoRowId);
    
    UFUNCTION(BlueprintCallable)
    static void SetReadyForMatch(const UObject* objectContext, const bool isReadyForMatch);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsSecretLeader(const UObject* objectContext, bool isSecretLeader);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* RetrieveGameModesDataTable(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MatchMapDifficultyToText(const EYMatchMapDifficulty difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MatchmakingResultToText(EYMatchmakingResult matchmakingResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserReadyForMatchmaking(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMatchMapEnabled(const UObject* objectContext, const FString& fullMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchmakingLockForMatchActive(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FYMapUnlockStatus IsMapUnlocked(UObject* playerContextObject, FDataTableRowHandle mapRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbleToClickMatchmakingButton(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFromGameMode(EYMatchmakeGameModeType gameModeType);
    
    UFUNCTION(BlueprintCallable)
    static FName GetSelectedMapId(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGameModeTextFromGameModeType(const UObject* objectContext, EYMatchmakeGameModeType gameModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGameModeTextFromGameMode(const UObject* objectContext, const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    static bool FindRelevantMatchmakingSetup(const UObject* objectContext, FYMatchmakingSetupEntry& outSetupEntry);
    
    UFUNCTION(BlueprintCallable)
    static bool FindMatchmakingSetupForMatchMap(const UObject* objectContext, const FString& fullMapName, FYMatchmakingSetupMatchEntry& outSetupEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMatchmakingSettings(const UObject* objectContext, FYMatchmakingSetupRow& outSetupRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYMatchmakingManager* FindMatchmakingManager(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYMatchmakeGameModeType ConvertStringToGameModeEnum(const FString& gameModeAsFString);
    
    UFUNCTION(BlueprintCallable)
    static bool CanMatchmake(const UObject* objectContext);
    
};

