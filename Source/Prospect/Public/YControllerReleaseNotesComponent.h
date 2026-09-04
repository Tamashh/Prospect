#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnShowReleaseNotesDelegate.h"
#include "YControllerReleaseNotesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerReleaseNotesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_releaseNotesVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowReleaseNotes OnReleaseNotesVisibilityStateChanged;
    
    UYControllerReleaseNotesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleReleaseNotes();
    
};

