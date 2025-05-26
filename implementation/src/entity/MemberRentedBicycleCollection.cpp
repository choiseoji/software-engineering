#include "../../include/entity/MemberRentedBicycleCollection.h"

/* 
 * 함수이름 : addRentedBicycle
 * 기능 : 자전거를 사용자가 대여한 자전거 컬렉션에 저장
 * 전달인자 : 
 *      - bicycle : 대여한 자전거
 * 반환 값 : 없음
 */
void MemberRentedBicycleCollection::addRentedBicycle(Bicycle* bicycle) {

    rentedBicycles_.push_back(bicycle);
}

/* 
 * 함수이름 : listRentedBicycle
 * 기능 : 사용자가 대여한 자전거 조회
 * 전달인자 : 없음
 * 반환 값 :
 *      - vector<Bicycle*>: 자전거 목록
 */
vector<Bicycle*> MemberRentedBicycleCollection::listRentedBicycle() {

    return (rentedBicycles_);
}