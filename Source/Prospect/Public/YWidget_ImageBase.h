#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YWidget_ImageBase.generated.h"

class UImage;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ImageBase : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImageLoaded, UTexture2D*, Texture);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageLoaded OnImageLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_loadingIndicator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_loadingIndicatorVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_image;
    
public:
    UYWidget_ImageBase();

    UFUNCTION(BlueprintCallable)
    void SetPreloadedTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(TSoftObjectPtr<UTexture2D> Texture, UMaterialInterface* Material);
    
};

