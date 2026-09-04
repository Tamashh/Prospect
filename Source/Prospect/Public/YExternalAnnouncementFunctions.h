#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YExternalAnnouncementFunctions.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable)
class UYExternalAnnouncementFunctions : public UObject {
    GENERATED_BODY()
public:
    UYExternalAnnouncementFunctions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void QueueAnnouncementLocal(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void PlayAnnouncementLocal(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlayAnnouncementForSinglePlayer(APlayerController* PlayerController, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlayAnnouncementForPlayerAndTeammates(AActor* playerContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions, bool includePlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayAnnouncementForAllPlayersInArea(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayAnnouncementForAllPlayersExcept(UObject* WorldContext, FDataTableRowHandle rowHandle, TArray<APlayerController*> ignoredPlayerControllers, FYAnnouncementPlaybackOptions playbackOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayAnnouncementForAllPlayers(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions);
    
};

