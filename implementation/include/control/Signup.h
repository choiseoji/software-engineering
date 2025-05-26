#ifndef SIGNUP_H
# define SIGNUP_H

# include "../entity/Member.h"
# include "../entity/RegisteredUser.h"
# include <string>
using namespace std;

// Signup 컨트롤 클래스 정의
class Signup {

private:

public:
    void signupUser(const string& id, const string& password, const string& phoneNumber, RegisteredUser& registeredUser);  // 회원가입 진행

};

#endif