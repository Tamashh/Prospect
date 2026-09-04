#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YClientMapLoadingStats.generated.h"

USTRUCT(BlueprintType)
struct FYClientMapLoadingStats : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 map_loading_time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 physical_memory_total;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 physical_memory_usage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 physical_memory_available;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 physical_memory_peak;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 page_size;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 virtual_memory_total;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 virtual_memory_usage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 virtual_memory_available;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 virtual_memory_peak;
    
    PROSPECT_API FYClientMapLoadingStats();
};

