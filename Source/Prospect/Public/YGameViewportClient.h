#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/GameViewportClient.h"
#include "EYFadeDirection.h"
#include "YGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class UYGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScreenshotProcessed);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETravelFailure::Type> m_cachedTravelFailureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENetworkFailure::Type> m_cachedNetworkFailureType;
    
public:
    UYGameViewportClient();

    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGameVersionDisplayInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool RemoveDebugString(int32 Handle);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool RemoveAllDebugText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Fade(const float Duration, const FString& Context, const EYFadeDirection fadeDirection);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearFade();
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 AddDebugString(const FString& Text, FColor Color);
    
};

