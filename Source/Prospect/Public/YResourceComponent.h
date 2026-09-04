#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnResourceRegeneratingChangedDelegate.h"
#include "OnResourceStaticDataChangedDelegate.h"
#include "YResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceRegeneratingChanged BP_OnResourceRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceStaticDataChanged BP_OnResourceDataChanged;
    
    UYResourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceValueRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceRegenerationProgressRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceNumSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceMaxValueRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAbsoluteValueRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAbsoluteMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalResourceNumSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalResourceMaxValue() const;
    
};

