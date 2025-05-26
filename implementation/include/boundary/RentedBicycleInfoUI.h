#ifndef RENTED_BICYCLE_INFO_UI_H
# define RENTED_BICYCLE_INFO_UI_H

#include "../../include/control/RentedBicycleInfo.h"
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

// RentedBicycleInfoUI 바운더리 클래스 정의
class RentedBicycleInfoUI {

private:
    RentedBicycleInfo& rentedBicycleInfo_;    // rentedBicycleInfo control 객체

public:
    RentedBicycleInfoUI(RentedBicycleInfo& rentedBicycleInfo);   // 생성자에 rentedBicycleInfo 주입
    void viewRentedBicycleRequest(RegisteredUser& registeredUser, ofstream& outFp);   // 대여한 자전거 목록 보기 요청

};

#endif