#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "YFindActivityLocationsRequestData.generated.h"

class AYActivityLocationLinked;

USTRUCT(BlueprintType)
struct FYFindActivityLocationsRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumDistanceToPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYActivityLocationLinked* m_areaLinkedLocationFilter;
    
    PROSPECT_API FYFindActivityLocationsRequestData();
};

