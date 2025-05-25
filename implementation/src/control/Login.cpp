#include "../../include/control/Login.h"

string Login::loginUser(const string& id, const string& password, RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    
    for (User* user : users) { 

        if (user->checkIdAndPassword(id, password)) {
            user->setLoginStatus();

            return (id + " " + password + "\n");
        }
    }
}