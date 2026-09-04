#pragma once
#include "CoreMinimal.h"
#include "EYHUDInfoMessageState.h"
#include "EYHUDInfoPriorityCategory.h"
#include "YHUDInfoEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FYHUDInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYHUDInfoPriorityCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYHUDInfoMessageState messageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    PROSPECT_API FYHUDInfoEntry();
};

