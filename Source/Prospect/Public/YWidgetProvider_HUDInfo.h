#pragma once
#include "CoreMinimal.h"
#include "EYHUDInfoMessageState.h"
#include "EYHUDInfoPriorityCategory.h"
#include "YHUDInfoEntry.h"
#include "YInteractionUpdateData.h"
#include "YPlayerInteraction.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_HUDInfo.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYWidgetProvider_HUDInfo : public UYWidgetProvider {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateProgress, EYHUDInfoPriorityCategory, cateogry, float, Duration, float, currentTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateCategoryAnnouncement, EYHUDInfoPriorityCategory, cateogry, EYHUDInfoMessageState, messageState, const FText&, Text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateAnnouncement, const FText&, Text);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateAnnouncement OnUpdateHUDInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateCategoryAnnouncement OnUpdateHUDInfoCategory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateProgress OnUpdateHUDProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYHUDInfoEntry> m_infoEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYHUDInfoPriorityCategory> m_customHandledCategories;
    
public:
    UYWidgetProvider_HUDInfo();

    UFUNCTION(BlueprintCallable)
    static void RemoveHUDInfo(UObject* objectContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionUpdate(const FYInteractionUpdateData& interactionData);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDetected(const FYPlayerInteraction& interactionData, bool detected);
    
public:
    UFUNCTION(BlueprintCallable)
    static void AddHUDProgress(UObject* objectContext, float Duration, EYHUDInfoPriorityCategory priorityCategory, float currentTime);
    
    UFUNCTION(BlueprintCallable)
    static void AddHUDInfo(UObject* objectContext, const FText& Text, EYHUDInfoPriorityCategory priorityCategory, EYHUDInfoMessageState messageState, int32 priorityModifier);
    
};

