#include "../../include/entity/Member.h"

/* 
 * 함수이름 : Member
 * 기능 : Member 클래스의 생성자. 사용자 ID, 비밀번호는 부모 클래스인 User를 통해 초기화하고, 전화번호 초기화
 * 전달인자 : 
 *      - id : 사용자 ID
 *      - password : 사용자 비밀번호
 *      - phoneNumber : 사용자 전화번호
 * 반환 값 : 없음
 */
Member::Member(const string& id, const string& password, const string& phoneNumber) : User(id, password) {

    phoneNumber_ = phoneNumber;
}

/* 
 * 함수이름 : getMemberPhonenumber
 * 기능 : 사용자 전화번호 조회
 * 전달인자 : 없음
 * 반환 값 : 사용자 전화번호
 */
string Member::getMemberPhonenumber() {

    return (phoneNumber_);
}

/* 
 * 함수이름 : addRentedBicycle
 * 기능 : 사용자가 대여한 자전거를 rentedBicycleCollection에 저장
 * 전달인자 : 
 *      - bicycle : 대여한 자전거
 * 반환 값 : 없음
 */
void Member::addRentedBicycle(Bicycle* bicycle) {

    rentedBicycleCollection_.addRentedBicycle(bicycle);
}

/* 
 * 함수이름 : listRentedBicycle
 * 기능 : 사용자의 현재 대여 중인 자전거 목록 조회
 * 전달인자 : 없음
 * 반환 값 :
 *      - vector<Bicycle*> : 대여 중인 자전거
 */
vector<Bicycle*> Member::listRentedBicycle() {

    return (rentedBicycleCollection_.listRentedBicycle());
}