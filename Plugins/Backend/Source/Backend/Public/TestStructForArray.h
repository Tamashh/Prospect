#pragma once
#include "CoreMinimal.h"
#include "TestDataStruct.h"
#include "TestStructForArray.generated.h"

USTRUCT(BlueprintType)
struct FTestStructForArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestDataStruct InternalDataStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InternalStringField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InternalStringArray;
    
    BACKEND_API FTestStructForArray();
};

