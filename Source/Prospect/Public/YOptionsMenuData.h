#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YOptionsMenuData.generated.h"

class UYNavigationCommand;

USTRUCT(BlueprintType)
struct FYOptionsMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYNavigationCommand> m_commandClass;
    
    PROSPECT_API FYOptionsMenuData();
};

