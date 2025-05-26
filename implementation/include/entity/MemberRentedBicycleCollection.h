#ifndef MEMBER_RENTED_BICYCLE_COLLECTION_H
# define MEMBER_RENTED_BICYCLE_COLLECTION_H

# include "Bicycle.h"
# include <vector>
using namespace std;

// 대여한 자전거를 모아두는 MemberRentedBicycleCollection 컬렉션 클래스 정의
class MemberRentedBicycleCollection {

private:
    vector<Bicycle*> rentedBicycles_;  // 대여한 자전거 저장하는 벡터

public:
    void addRentedBicycle(Bicycle* bicycle);  // 자전거 등록
    vector<Bicycle*> listRentedBicycle();   // 대여중인 자전거 조회
    
};

#endif