#include "../../include/entity/User.h"

User::User(const string& id, const string& password) {
    
    id_ = id;
    password_ = password;
    is_logined_ = false;   // 초기 로그인 상태 : false
}

bool User::checkIdAndPassword(const string& id, const string& password) const {

    if (id_ == id && password_ == password)
        return (true);
    return (false);
}

void User::setLoginStatus() {

    is_logined_ = true;
}

bool User::checkLoginStatus() {
    
    return (is_logined_);
}

void User::setLogoutStatus() {

    is_logined_ = false;
}

string User::getUserId() {

    return (id_);
}

string User::getUserPassword() {

    return (password_);
}
