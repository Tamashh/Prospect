#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "YCharacterCustomizationBodyPart.h"
#include "YActiveCustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_archetypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_slotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationBodyType m_bodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCharacterCustomizationBodyPart> m_bodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initialized;
    
    PROSPECT_API FYActiveCustomizationData();
};

