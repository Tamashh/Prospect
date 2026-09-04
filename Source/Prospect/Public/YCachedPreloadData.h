#pragma once
#include "CoreMinimal.h"
#include "YCachedPreloadData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FYCachedPreloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_class;
    
    PROSPECT_API FYCachedPreloadData();
};

