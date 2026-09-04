#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YHitscanTraceEntry.h"
#include "YMulticastHitscanReplicationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYMulticastHitscanReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYHitscanTraceEntry> m_traceEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_transportDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_impactDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageOriginTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_owner;
    
    PROSPECT_API FYMulticastHitscanReplicationData();
};

