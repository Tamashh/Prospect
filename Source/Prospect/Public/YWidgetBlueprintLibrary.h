#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "EYVisibilityBranch.h"
#include "YWidgetBlueprintLibrary.generated.h"

class AActor;
class UObject;
class UWidget;
class UWidgetSwitcher;
class UYSkeletalMeshComponentFOV;
class UYWidget;
class UYWidget_ConfirmationModal;

UCLASS(Blueprintable)
class UYWidgetBlueprintLibrary : public UWidgetBlueprintLibrary {
    GENERATED_BODY()
public:
    UYWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool YProjectWorldToScreenUsingSkeletalMeshFov(const UObject* WorldContextObject, const FVector& WorldPosition, const UYSkeletalMeshComponentFOV* skelMeshFov, FVector2D& screenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool YProjectWorldToScreenUsingFov(const UObject* WorldContextObject, const FVector& WorldPosition, float customFov, FVector2D& screenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool YProjectWorldToScreen(UObject* WorldContextObject, const FVector& WorldPosition, FVector2D& screenPosition, bool bPlayerViewportRelative, const FVector2D leftAndUpperEdge, const FVector2D rightAndLowerEdge);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindFromOKAndCancelModal(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void SynchronizeWidgetProperties(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static bool SwitchWidgetIndexWidget(UWidgetSwitcher* WidgetSwitcher, UWidget* desiredWidget);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchWidgetIndexInteger(UWidgetSwitcher* WidgetSwitcher, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SwitchVisibilityCondensed(const ESlateVisibility InVisibility, EYVisibilityBranch& branches, bool& IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void ShowToastMessage(const FText primaryText, const FText secondaryText, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UYWidget_ConfirmationModal* RequestOKAndCancelModal(const FText& headline, const FText& Message, const FText okButtonText, const FText cancelButtonText, const FText warningMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool ProjectToScreenPeriphery(const AActor* OtherActor, FVector2D& outProjectedPosition, float& outAngleInDegrees, const float offsetPercent);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFeedbackSurvey(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FText LoginResultToText(EYLoginResult loginResult);
    
    UFUNCTION(BlueprintCallable)
    static UYWidget_ConfirmationModal* GetDialogOKAndCancelModal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTextWithParams(const FText& Text, const TMap<FString, FString>& textParams, const TMap<FString, FString>& localizedParams, FName stringTableName);
    
    UFUNCTION(BlueprintCallable)
    static FText ConvertTimeToDisplayText(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConstructLocationNameForBI(const UYWidget* widgetObject);
    
};

