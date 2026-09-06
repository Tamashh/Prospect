#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YLazyScrollGridItem.h"
#include "YLazyScrollGridHostInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYLazyScrollGridHostInterface : public UInterface {
    GENERATED_BODY()
};

class IYLazyScrollGridHostInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestLoadingGridItems(const TArray<FYLazyScrollGridItem>& Items);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGridItemInitialize(const FYLazyScrollGridItem& Item);

};
