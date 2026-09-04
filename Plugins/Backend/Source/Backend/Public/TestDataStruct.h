#pragma once
#include "CoreMinimal.h"
#include "TestDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FTestDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UInt16Field;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Int64Field;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Int8Field;
    
    BACKEND_API FTestDataStruct();
};

