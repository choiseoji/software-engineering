#include "../../include/control/Signup.h"

void Signup::signupUser(const string& id, const string& password, const string& phonenumber,RegisteredUser& registeredUser) {

    User* newUser = new Member(id, password, phonenumber);
    registeredUser.addNewMember(newUser);      // RegisteredUser에 새로운 유저 추가
}