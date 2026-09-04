#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YBIHookHelperFunctions.generated.h"

class AActor;
class APlayerState;

UCLASS(Blueprintable)
class UYBIHookHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYBIHookHelperFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsInStation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsInLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUniquePlayerIDAsString(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeSinceJoined(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetMatchTimeInSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLobbyTimeInSecondsServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString FindSpecificGameContext(UObject* WorldContextObject);
    
};

