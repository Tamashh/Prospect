#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YDebugFindDropLocationVectorInfo.h"
#include "YFindDropLocationData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FYFindDropLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_worldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actorContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_preferredDropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_choosenSuitableDropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_navMeshRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_contextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDebugFindDropLocationVectorInfo> m_additionalDebugInfo;
    
    PROSPECT_API FYFindDropLocationData();
};

