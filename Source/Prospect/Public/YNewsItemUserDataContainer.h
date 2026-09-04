#pragma once
#include "CoreMinimal.h"
#include "YNewsItemUserData.h"
#include "YNewsItemUserDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemUserDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItemUserData> m_newsItemUserData;
    
    PROSPECT_API FYNewsItemUserDataContainer();
};

