#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImageAmmoType.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImageAmmoType : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemComponentImageLoaded, UTexture2D*, Texture);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemComponentImageLoaded OnComponentImageLoaded;
    
    UYWidget_ItemComponentImageAmmoType();

private:
    UFUNCTION(BlueprintCallable)
    void OnImageLoaded(TSoftObjectPtr<UTexture2D> Image) const;
    
};

