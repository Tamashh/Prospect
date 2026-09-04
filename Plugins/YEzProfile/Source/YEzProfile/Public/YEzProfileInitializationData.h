#pragma once
#include "CoreMinimal.h"
#include "EYEZProfileType.h"
#include "YEzProfileInitializationData.generated.h"

USTRUCT(BlueprintType)
struct YEZPROFILE_API FYEzProfileInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_triggerReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeToProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEZProfileType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceNewProfile;
    
    FYEzProfileInitializationData();
};

