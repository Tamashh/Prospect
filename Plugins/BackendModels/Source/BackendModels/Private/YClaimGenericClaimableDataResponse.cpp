#include "YClaimGenericClaimableDataResponse.h"

FYClaimGenericClaimableDataResponse::FYClaimGenericClaimableDataResponse() {
    this->Origin = EYGenericClaimableOrigin::None;
    this->responseType = EYClaimGenericClaimableDataResponseType::UnknownError;
}
