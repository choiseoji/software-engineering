#ifndef LOGIN_UI_H
# define LOGIN_UI_H

#include "../../include/control/Login.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// LoginUI 바운더리 클래스 정의
class LoginUI {

private:
    Login& login_;    // login control 객체

public:
    LoginUI(Login& login);   // 생성자에 login 주입
    void inputIdAndPassword(ifstream& inFp, RegisteredUser& registeredUser, ofstream& outFp);  // 로그인 정보 받기
};

#endif