#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYSquadID.h"
#include "YSquadHelperFunctions.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class PROSPECT_API UYSquadHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYSquadHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool TryGetSquadSecretLeaderName(const UObject* WorldContext, FString& leaderName);
    
    UFUNCTION(BlueprintCallable)
    static FText SquadActionResultToText(EYSquadActionResult squadActionResult);
    
    UFUNCTION(BlueprintCallable)
    static void RequestStartDeployFlow(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void RequestLeaveSquadModal(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void RequestExitDeployFlow(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void RequestChangeMap(const UObject* objectContext, const FString& selectedMapName);
    
    UFUNCTION(BlueprintCallable)
    static void LogSquadsInfo(const FString& Message);

    UFUNCTION(BlueprintCallable)
    static bool LeaveSquad(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUserInLocalSquad(const UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSquadFull(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerInLocalSquad(AActor* playerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerInGameSquad(AActor* playerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLocalPlayerSquadSecretLeader(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInSquad(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsAnyoneInTheSquadReadyForMatchmaking(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool InviteToSquad(UObject* objectContext, const FString& targetUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSquadSize(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSquadName(const EYSquadID squadId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumSquadMembersAliveOrEscaped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxSquadSize(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindPendingInviteFromUser(UObject* objectContext, const FString& UserId, FString& outInviteId);
    
    UFUNCTION(BlueprintCallable)
    static bool DeclineSquadInvite(UObject* objectContext, const FString& inviteId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanInviteToSquad(UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool AreSquadMembersReadyForMatchmaking(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool AcceptSquadInvite(UObject* objectContext, const FString& inviteId);
    
};

