#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LevelScriptActor.h"
#include "EYScreenType.h"
#include "EYApperenceCategoriesTypes.h"
#include "EYCameraIntentionType.h"
#include "OnCameraIntentionChangedDelegate.h"
#include "OnScreenTypeChangedDelegate.h"
#include "YLevelMapRuntimeData.h"
#include "YLevelScript.generated.h"

class AYCharacterCustomizationActor;
class AYCharacterCustomizationExplicitCustomizationActor;
class AYLevelScript;
class UObject;
class UTexture2D;
class UYSpectateComponent;

UCLASS(Blueprintable)
class AYLevelScript : public ALevelScriptActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMatchEscapeSequenceCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEOMLevelLoaded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraIntentionChanged OnIntentionTypeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenTypeChanged OnScreenTypeChanged;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEOMLevelLoaded OnEOMLevelLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_minimapBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYCharacterCustomizationExplicitCustomizationActor* m_explicitCustomizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYCharacterCustomizationActor* m_playerCharacterCustomizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCameraIntentionType m_intention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYScreenType m_activeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYApperenceCategoriesTypes m_activeApperenceMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLevelMapRuntimeData> m_minimapData;
    
public:
    AYLevelScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleEndOfMatchLevelVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetZoom(UObject* relevantObject, float zoom, int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapTextureSize(UObject* relevantObject, const FVector& mapTextureSize, int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveCameraIntentionType(UObject* relevantObject, EYCameraIntentionType intentionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMatchEscapeSequence(UYSpectateComponent* spectateComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTypeChangedCallback(EYScreenType screenType);
    
    UFUNCTION(BlueprintCallable)
    void MatchEscapeSequenceCompleted(UYSpectateComponent* spectateComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetZoomedTextureSize(UObject* relevantObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetZoom(UObject* relevantObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetMapTextureSize(UObject* relevantObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYLevelMapRuntimeData GetMapRuntimeData(UObject* relevantObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AYLevelScript* FindLevelScript(UObject* relevantObject);
    
    UFUNCTION(BlueprintCallable)
    static EYScreenType FindActiveScreen(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ConvertWorldToMinimapCoordinate(UObject* relevantObject, FVector LevelCoordinate, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ConvertMapCoordinateToWorld(UObject* relevantObject, FVector2D MapCoordinate, int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelMatchEscapeSequence(UYSpectateComponent* spectateComponent);
    
};

