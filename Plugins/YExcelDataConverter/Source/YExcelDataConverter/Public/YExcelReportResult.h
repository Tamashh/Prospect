#pragma once
#include "CoreMinimal.h"
#include "YExcelReportResult.generated.h"

class UPackage;

USTRUCT(BlueprintType)
struct YEXCELDATACONVERTER_API FYExcelReportResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPackage*> m_packages;
    
    FYExcelReportResult();
};

