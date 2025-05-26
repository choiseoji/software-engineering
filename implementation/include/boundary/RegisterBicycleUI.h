#ifndef REGISTER_BICYCLE_UI_H
# define REGISTER_BICYCLE_UI_H

#include "../../include/control/RegisterBicycle.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// RegisterBicycleUI 바운더리 클래스 정의
class RegisterBicycleUI {

private:
    RegisterBicycle& registerBicycle_;   // registerBicycle control 객체

public:
    RegisterBicycleUI(RegisterBicycle& registerBicycle);    // 생성자에 registerBicycle 주입
    void inputBicycleInfo(ifstream& inFp, RegisteredBicycle& registeredBicycle, ofstream& outFp);   // 자전거 등록 요청
};

#endif