#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAnalyticsTypesSettingsRow.generated.h"

USTRUCT(BlueprintType)
struct FYAnalyticsTypesSettingsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ignoreUserSampling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_samplingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_serverSideSampling;
    
    PROSPECT_API FYAnalyticsTypesSettingsRow();
};

