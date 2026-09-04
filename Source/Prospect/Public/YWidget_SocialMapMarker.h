#pragma once
#include "CoreMinimal.h"
#include "YWidget_MapMarker.h"
#include "YWidget_SocialMapMarker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SocialMapMarker : public UYWidget_MapMarker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOwnedByLocalPlayerState;
    
public:
    UYWidget_SocialMapMarker();

};

