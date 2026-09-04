#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "YActivityLocationArray.h"
#include "YActivityLinkedLocations.generated.h"

USTRUCT(BlueprintType)
struct FYActivityLinkedLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, FYActivityLocationArray> m_linkedLocationsPerType;
    
    PROSPECT_API FYActivityLinkedLocations();
};

