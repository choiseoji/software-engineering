#ifndef SIGNUP_UI_H
#define SIGNUP_UI_H

#include "../../include/control/Signup.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// SignupUI 바운더리 클래스 정의
class SignupUI {

private:
    Signup& signup_;   // signup control 객체

public:
    SignupUI(Signup& signup);   // 생성자에 signup 주입
    void inputInformation(ifstream& inFp, RegisteredUser& registeredUser, ofstream& outFp);   // 회원가입 정보 받기
};

#endif