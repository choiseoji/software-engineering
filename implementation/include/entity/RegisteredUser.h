#ifndef REGISTERED_USER_H
# define REGISTERED_USER_H

# include "Member.h"
# include <string>
# include <vector>
using namespace std;

// 유저 저장하는 RegisteredUser 엔티티 클래스 정의
class RegisteredUser {

private:
    vector<User*> registeredUsers_;  // 등록된 유저

public:
    void addNewMember(User* user);  // 유저 새로 등록
    vector<User*>& listUser();   // 유저 리스트 조회

};

#endif