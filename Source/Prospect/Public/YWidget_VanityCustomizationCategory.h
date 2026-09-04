#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "YWidget_ItemContainer.h"
#include "YWidget_VanityCustomizationCategory.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_VanityCustomizationCategory : public UYWidget_ItemContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_vanityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_slotId;
    
    UYWidget_VanityCustomizationCategory();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ImageSet(const TSoftObjectPtr<UTexture2D>& imagePath);
    
};

