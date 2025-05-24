#include "include/entity/RegisteredUser.h"

void RegisteredUser::addNewMember(User* user) {

    registered_users_.push_back(user);
}

vector<User*> RegisteredUser::listUser() {

    return (registered_users_);
}