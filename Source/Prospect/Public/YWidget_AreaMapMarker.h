#pragma once
#include "CoreMinimal.h"
#include "YWidget_MapMarker.h"
#include "YWidget_AreaMapMarker.generated.h"

class UImage;
class UYAreaMapMarkerData;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_AreaMapMarker : public UYWidget_MapMarker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_area;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAreaMapMarkerData* m_areaMarkerInfo;
    
public:
    UYWidget_AreaMapMarker();

};

