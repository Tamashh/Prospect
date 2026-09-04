#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOnVanityItemsUpdatedDelegate.h"
#include "YGlobalVanityManager.generated.h"

class UYGlobalVanityModel;

UCLASS(Blueprintable)
class UYGlobalVanityManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnVanityItemsUpdated OnVanityItemsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UYGlobalVanityModel*> m_models;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGlobalVanityModel* m_baseModel;
    
    UYGlobalVanityManager();

};

