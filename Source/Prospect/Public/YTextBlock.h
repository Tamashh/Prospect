#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "YTextBlock.generated.h"

class USlateWidgetStyleAsset;

UCLASS(Blueprintable)
class UYTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_normalTextBlockStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_hoveredTextBlockStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_overrideColorAndOpacity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_isChildOfButton: 1;
    
public:
    UYTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleHovered();
    
};

