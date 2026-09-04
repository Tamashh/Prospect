#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAIAggroDataArrayObject.generated.h"

class UYAIAggroData;

UCLASS(Blueprintable)
class UYAIAggroDataArrayObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroData*> m_aggroDataArray;
    
    UYAIAggroDataArrayObject();

};

