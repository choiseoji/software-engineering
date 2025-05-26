#ifndef RENT_BICYCLE_UI_H
# define RENT_BICYCLE_UI_H

#include "../../include/control/RentBicycle.h"
#include <fstream>
#include <string>
#include <sstream>

// RentBicycleUI 바운더리 클래스 정의
class RentBicycleUI {

private:
    RentBicycle& rentBicycle_;     // rentBicycle control 객체

public:
    RentBicycleUI(RentBicycle& rentBicycle);   // 생성자에 rentBicycle 주입
    void rentRequest(ifstream& inFp, RegisteredBicycle& registeredBicycle, RegisteredUser& registeredUser, ofstream& outFp);  // 자전거 대여 요청
};

#endif