#pragma once
#include "CoreMinimal.h"
#include "YSquadInfo.generated.h"

class AYPlayerState;

USTRUCT(BlueprintType)
struct FYSquadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerState*> m_members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_deadMemberUserIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_size;
    
    PROSPECT_API FYSquadInfo();
};

