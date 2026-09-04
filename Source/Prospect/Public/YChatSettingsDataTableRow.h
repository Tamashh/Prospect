#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YChannelSettings.h"
#include "YDataTableRowBase.h"
#include "YChatSettingsDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYChatSettingsDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mutingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountOfUsersToTrackMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountOfChatMessageToSendAtReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_msPerAppliedIssueRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYChannelType, FYChannelSettings> m_channelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> m_audioDeviceLocalizationMap;
    
    FYChatSettingsDataTableRow();
};

