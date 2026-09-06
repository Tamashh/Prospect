#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YCaptureFrameBufferComponent.generated.h"

class UTexture2D;
class UYCaptureFrameBufferComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCaptureFrameBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFrameBufferCaptureComplete, UYCaptureFrameBufferComponent*, Component);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_texture;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrameBufferCaptureComplete BP_OnFrameBufferCaptureComplete;

    UYCaptureFrameBufferComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateFrameBuffer();

    UFUNCTION(BlueprintCallable)
    void OnFrameBufferCaptureQueued();

    UFUNCTION(BlueprintCallable)
    void OnFrameBufferCaptureComplete();

    UFUNCTION(BlueprintCallable)
    void CaptureBackBufferToTexture(float InDeltaTime);

};
