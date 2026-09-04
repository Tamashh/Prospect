#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYCustomizationMode.h"
#include "OnCustomizationWorldLocationSignatureDelegate.h"
#include "YControllerCustomizationState.h"
#include "YOnCustomIdChangedSignatureDelegate.h"
#include "YOnCustomizationModeChangedSignatureDelegate.h"
#include "YOnCustomizationStateChangedSignatureDelegate.h"
#include "YOnItemIdChangedSignatureDelegate.h"
#include "YOnRotationModeChangedSignatureDelegate.h"
#include "YControllerCustomizationPreviewComponent.generated.h"

class AActor;
class UObject;
class UYControllerCustomizationPreviewComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCustomizationPreviewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomizationModeChangedSignature OnCustomizationModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRotationModeChangedSignature OnRotationModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizationWorldLocationSignature OnWorldLocationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemIdChangedSignature OnItemIdChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomIdChangedSignature OnCustomIdChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomizationStateChangedSignature OnCustomizationStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerCustomizationState m_state;
    
public:
    UYControllerCustomizationPreviewComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryChangeCameraActorsBasedOnActiveScene(AActor* relevantActor, const FString& callerContext);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetWorldSpaceCustomizationLocationStatic(const UObject* objCtx, const FTransform& Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubScreenStatic(const AActor* contextActor, const FString& secondaryScreen);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemIdStatic(const AActor* contextActor, const FString& baseItemId, const FString& customItemID, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomizationModeStatic(const UObject* objCtx, const FString& callerContext, EYCustomizationMode Mode, bool rotationEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterCustomizationCategoryPreviewStatic(const UObject* objCtx, EYCustomizationCategory Category);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSceneAddedCallback(FDataTableRowHandle sceneRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationModeActorsChanged(EYCustomizationMode modeChange, bool stored);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCustomizationCategoryChanged(EYCustomizationCategory newCategory, EYCustomizationMode Mode) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleCustomizationModeStateChanged(EYCustomizationMode Mode, bool IsActive, const FString& callerContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYControllerCustomizationState GetCustomizationStateStatic(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static void ForceRetriggerOfActiveCustomizationMode(const UObject* objCtx, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    static UYControllerCustomizationPreviewComponent* FindCustomizationPreviewComponent(const UObject* objCtx);
    
};

