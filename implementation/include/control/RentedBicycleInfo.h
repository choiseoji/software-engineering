#ifndef RENTED_BICYCLE_INFO_H
# define RENTED_BICYCLE_INFO_H

# include "../entity/RegisteredUser.h"
# include <string>
using namespace std;

// RentedBicycleInfo 컨트롤 클래스 정의
class RentedBicycleInfo {

private:

public:
    vector<pair<string, string> > viewRentedBicycle(RegisteredUser& registeredUser);   // 대여한 자전거 목록 보기
};

#endif