#pragma once
#include "CoreMinimal.h"
#include "YPreloadEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPreloadEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> m_class;
    
    PROSPECT_API FYPreloadEntry();
};

