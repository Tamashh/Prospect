#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YCarrouselData.h"
#include "YWidget_ImageCarrousel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ImageCarrousel : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numOfVisibleEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_selectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_selectRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCarrouselData> m_sourceData;
    
    UYWidget_ImageCarrousel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDataAvailable();
    
};

