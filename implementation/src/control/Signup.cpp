#include "../../include/control/Signup.h"

string Signup::signupUser(const string& id, const string& password, const string& phonenumber,RegisteredUser& registeredUser) {

    User* newUser = new Member(id, password, phonenumber);
    registeredUser.addNewMember(newUser);      // RegisteredUser에 새로운 유저 추가
    
    return (newUser->getUserId() + " " + newUser->getUserPassword() + " " + newUser->getMemberPhonenumber() + "\n");
}