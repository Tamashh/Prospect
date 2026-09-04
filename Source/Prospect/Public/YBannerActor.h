#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YBannerActor.generated.h"

class UYDataTableRowAssociationComponent;

UCLASS(Blueprintable)
class AYBannerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isLocalAttachedBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDataTableRowAssociationComponent* m_rowAssociationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCustomizationBanner;
    
    AYBannerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsAttached(bool attachedStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOwnerChanged();
    
};

