#pragma once
#include "CoreMinimal.h"
#include "YActorWidget.h"
#include "YActorWidgetSimple.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYActorWidgetSimple : public UYActorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_distanceText;
    
public:
    UYActorWidgetSimple();

protected:
    UFUNCTION(BlueprintCallable)
    void OnImageLoaded();
    
    UFUNCTION(BlueprintCallable)
    void CalculateLocalDistanceTowardsPlayer();
    
};

