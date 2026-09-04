#include "YWidget_SocialUserList.h"

UYWidget_SocialUserList::UYWidget_SocialUserList() {
    this->m_entryWBP = NULL;
    this->m_socialUICategory = EYSocialUICategory::FriendInvites;
}

void UYWidget_SocialUserList::OnUserSearchResponse(bool hasFound, const FYPlayfabUserAccountInfo& Result) {
}

void UYWidget_SocialUserList::OnPermanentNotificationsUpdated() {
}

void UYWidget_SocialUserList::OnPendingFriendRequests() {
}

void UYWidget_SocialUserList::OnFriendsListUpdated() {
}




