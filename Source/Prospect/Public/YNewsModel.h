#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "YNewsItem.h"
#include "YNewsItemUserData.h"
#include "YOnNewsDataUpdatedDelegate.h"
#include "YOnNewsUserDataUpdatedDelegate.h"
#include "YNewsModel.generated.h"

UCLASS(Blueprintable)
class UYNewsModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnNewsDataUpdated OnNewsDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnNewsUserDataUpdated OnNewsUserDataUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItemUserData> m_newsUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItem> m_newsDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_lastCacheUpdate;
    
public:
    UYNewsModel();

};

