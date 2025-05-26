#ifndef RENT_BICYCLE_H
# define RENT_BICYCLE_H

# include "../entity/RegisteredUser.h"
# include "../entity/RegisteredBicycle.h"

// RentBicycle 컨트롤 클래스 정의
class RentBicycle {

private:

public:
    pair<string, string> rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle);  // 자전거 대여 요청 처리

};

#endif