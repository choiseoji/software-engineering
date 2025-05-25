#include "../../include/control/Logout.h"

void Logout::logoutUser(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {
            user->setLogoutStatus();
        }
    }
}