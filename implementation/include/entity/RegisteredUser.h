#ifndef REGISTERED_USER_H
# define REGISTERED_USER_H

# include "Member.h"
# include <string>
# include <vector>
using namespace std;

class RegisteredUser {

private:
    vector<User*> registered_users_;  // User 포인터 저장

public:
    void addNewMember(User* user);
    vector<User*> listUser();

};

#endif