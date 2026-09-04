#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "YAssetValidatorEntry.h"
#include "YAssetCheckerDataAsset.generated.h"

UCLASS(Blueprintable, Config=Game)
class YDATAVALIDATOR_API UYAssetCheckerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FYAssetValidatorEntry> m_validationEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> m_dataValidatorPath;
    
    UYAssetCheckerDataAsset();

};

