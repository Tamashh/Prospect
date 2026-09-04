#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImage.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImage : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemComponentImageLoaded, UTexture2D*, Texture);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemComponentImageLoaded OnComponentImageLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLargeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_blueprintMaterial;
    
public:
    UYWidget_ItemComponentImage();

private:
    UFUNCTION(BlueprintCallable)
    void OnImageLoaded(TSoftObjectPtr<UTexture2D> Image);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
};

