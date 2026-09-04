#pragma once
#include "CoreMinimal.h"
#include "YLevelActorContainer.h"
#include "YMenuCameraCustomizationCategoryAssociation.h"
#include "YMenuLevelActorContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYMenuLevelActorContainer : public UYLevelActorContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_mainCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMenuCameraCustomizationCategoryAssociation> m_cameraCustomizationCategorySetup;
    
    UYMenuLevelActorContainer();

};

