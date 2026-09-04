#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "YFeatureToggleExternalFunctions.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UYFeatureToggleExternalFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYFeatureToggleExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseWeaponTimeFrameCompensation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseSimpleCharacterStateSwitchRestrictions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldSpawnScoresAffectMatchmaker(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsYPlayersStatsComponentEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingVivoxOfflineEnviroment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingPlayfab(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingDebugCommandPurchaseOffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingClientSideVivoxTokens();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStationNPCVisibilityPerformanceEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpawnNPCCharactersInStaton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSocialActorEnabled(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSingleplayerSmokecheckEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShouldUseBackendGlobalVanityBase(AActor* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShouldUseBackendCommunicationForCharacter(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShouldUseBackendCommunicationBase(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShouldRolledPerkBeDeactivated(const UObject* objCtx, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShouldMergeSkeletalMeshComponents(bool isOwner, const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSeamlessTravelEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegionRepingAtMMFailureEnabled(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPingingForSocialActorEnabled(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnboardingEnabled(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOfflineSeasonsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNPCRandomizationEnabledInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionChallengesRandomizationEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeaderboardDataUpdatingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemTurnedOff(const UObject* objCtx, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFortunaPassEnabled(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsForceThirdPersonEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConnectingToVivoxInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChatNoBackendEnabled(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterOutlineEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterMeshMergingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterEditorMeshMerging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlternativeAnimationClassActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllowTargetingDuringWeaponSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllowingSimulatePhysicsOnWeaponCharms();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIVisualizeRangedAttacksEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIDodgeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIAggroTokenSystemV2Enabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetOfflineSeasonID();
    
};

