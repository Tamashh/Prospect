#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOSSFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYOSSFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerIdQueryDone OnPlayerIdQueryDone;
    
    UYOSSFunctionLibrary();

};

