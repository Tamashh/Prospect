#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EYMetaConverterTypes.h"
#include "YCSVMetaDataEntry.h"
#include "YExcelConverterDataAsset.generated.h"

UCLASS(Blueprintable, Config=Game)
class YEXCELDATACONVERTER_API UYExcelConverterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYMetaConverterTypes, FYCSVMetaDataEntry> m_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> m_excelDataConverterPath;
    
    UYExcelConverterDataAsset();

};

