#ifndef LOGOUT_UI_H
# define LOGOUT_UI_H

#include "../../include/control/Logout.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// LogoutUI 바운더리 클래스 정의
class LogoutUI {

private:
    Logout& logout_;   // logout control 객체

public:
    LogoutUI(Logout& logout);    // 생성자에 logout 주입
    void logoutRequest(RegisteredUser& registeredUser, ofstream& outFp);  // 로그아웃 요청
};

#endif