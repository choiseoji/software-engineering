#ifndef LOGIN_H
# define LOGIN_H

# include "../entity/RegisteredUser.h"
# include <string>
# include <vector>
using namespace std;

// Login 컨트롤 클래스 정의
class Login {

private:

public:
    pair<string, string> loginUser(const string& id, const string& password, RegisteredUser& registeredUser);  // 유저 로그인 진행

};

#endif