#pragma once
#include "CoreMinimal.h"
#include "YAssetTagCheckEntry.generated.h"

USTRUCT(BlueprintType)
struct FYAssetTagCheckEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_specificTagEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_onlyCheckSpecificFolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_ignoreSpecificFolders;
    
    YDATAVALIDATOR_API FYAssetTagCheckEntry();
};

