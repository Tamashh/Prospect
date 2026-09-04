#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_SimpleHeadline.generated.h"

class UTextBlock;
class UTexture2D;
class UYWidget_ImageBase;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SimpleHeadline : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_headlineTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_headlineIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_headlineText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_headlineIconTexture;
    
public:
    UYWidget_SimpleHeadline();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(TSoftObjectPtr<UTexture2D> iconTexture);
    
};

