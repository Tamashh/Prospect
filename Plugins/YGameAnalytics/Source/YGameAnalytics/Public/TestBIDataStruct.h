#pragma once
#include "CoreMinimal.h"
#include "TestBIDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FTestBIDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UInt16Field;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Int64Field;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Int8Field;
    
    YGAMEANALYTICS_API FTestBIDataStruct();
};

