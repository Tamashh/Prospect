#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYMatchState.h"
#include "YProspectMatchFunctions.generated.h"

UCLASS(Blueprintable)
class UYProspectMatchFunctions : public UObject {
    GENERATED_BODY()
public:
    UYProspectMatchFunctions();

    UFUNCTION(BlueprintCallable)
    static void UpdateCharacterSelectionFinished(const UObject* objectContext, bool finishedCharacterSelection);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowLoadingOverlay(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPersistentMatch(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInTutorial(const UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInMatch(const UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInLobby(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInCharacterSelection(const UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInBeginnerMatch(const UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterSelectionFinished(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static EYMatchState FindMatchState(const UObject* objectContext, const FString& contextString);
    
};

