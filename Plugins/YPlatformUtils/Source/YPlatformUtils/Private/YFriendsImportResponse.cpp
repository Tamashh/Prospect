#include "YFriendsImportResponse.h"

FYFriendsImportResponse::FYFriendsImportResponse() {
    this->resultCode = EYFriendsImportResultCode::Success;
    this->numOfImportedFriends = 0;
    this->numOfLinkedFriends = 0;
    this->maxFriendsLimit = 0;
}

