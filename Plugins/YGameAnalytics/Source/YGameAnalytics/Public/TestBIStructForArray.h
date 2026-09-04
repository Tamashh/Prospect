#pragma once
#include "CoreMinimal.h"
#include "TestBIDataStruct.h"
#include "TestBIStructForArray.generated.h"

USTRUCT(BlueprintType)
struct FTestBIStructForArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestBIDataStruct InternalDataStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InternalStringField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InternalStringArray;
    
    YGAMEANALYTICS_API FTestBIStructForArray();
};

