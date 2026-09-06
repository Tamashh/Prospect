#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YNewsManager.generated.h"

class UYNewsModel;

UCLASS(Blueprintable)
class PROSPECT_API UYNewsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNewsModel* m_model;
    
public:
    UYNewsManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnNewsDataUpdate();
    
};

