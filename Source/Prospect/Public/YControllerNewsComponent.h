#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YNewsItem.h"
#include "YNewsItemButtonData.h"
#include "YNewsItemUserData.h"
#include "YRetentionProgress.h"
#include "YControllerNewsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerNewsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerNewsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StoreUserDataToPlayfab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowNewsScreen(int32 Index, bool hasLoginBonus, bool autoOpen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowNewsScreen(bool returningFromMatch) const;
    
    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool isFocused);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRetentionBonusDataRequestFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnRetentionBonusDataReceived(FYRetentionProgress progress);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNewsScreenClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnNewsItemOpened(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void OnNewsItemButtonClicked(const FString& ID, FYNewsItemButtonData Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitialNewsUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkNewsItemAsSeen(const FString& ID, bool seen);
    
    UFUNCTION(BlueprintCallable)
    void MarkNewsItemAsRead(const FString& ID, bool read);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewsItemOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void HideNewsScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnseenNewsItem(float priorityThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnreadNewsItemToShowAfterMatch(float priorityThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnreadNewsItem(float priorityThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSingleNewsItemUserData(const FString& ID, FYNewsItemUserData& userData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYNewsItemUserData> GetNewsItemUserData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastCacheUpdateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYNewsItem> GetCurrentNewsItems() const;
    
};

