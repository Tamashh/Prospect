#pragma once
#include "CoreMinimal.h"
#include "YAudioOcclusionTraceData.generated.h"

class UYOcclusionPluginSettings;

USTRUCT(BlueprintType)
struct FYAudioOcclusionTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYOcclusionPluginSettings* m_occlusionPluginSettings;
    
    PROSPECT_API FYAudioOcclusionTraceData();
};

