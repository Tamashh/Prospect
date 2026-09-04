#pragma once
#include "CoreMinimal.h"
#include "YWidget_GrantEntry.h"
#include "YWidget_LimitedSpaceGrantEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LimitedSpaceGrantEntry : public UYWidget_GrantEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spaceUsedByBigEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spaceUsedBySmallEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_cachedNumGrantEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxIndexAllowedForBigEntry;
    
public:
    UYWidget_LimitedSpaceGrantEntry();

};

