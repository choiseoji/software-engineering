#include "../../include/control/Login.h"

pair<string, string> Login::loginUser(const string& id, const string& password, RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    
    for (User* user : users) { 

        if (user->checkIdAndPassword(id, password)) {
            
            user->setLoginStatus();
            return {user->getUserId(), user->getUserPassword()};
        }
    }
    return {"", ""};
}