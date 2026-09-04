#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerData.h"
#include "YPlayerMapMarkerData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYPlayerMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_isDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_isCloaked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* m_associatedPlayerState;
    
    UYPlayerMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

