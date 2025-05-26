#include "../../include/entity/Bicycle.h"

/* 
 * 함수이름 : Bicycle
 * 기능 : Bicycle 클래스의 생성자. 자전거 ID, 이름 초기화, 대여상태 false로 설정
 * 전달인자 : 
 *      - bicycleId : 자전거 ID
 *      - bicycleName : 자전거 이름
 * 반환 값 : 없음
 */
Bicycle::Bicycle(const string& bicycleId, const string& bicycleName) {

    bicycleId_ = bicycleId;
    bicycleName_ = bicycleName;
    isRented_ = false;
}

/* 
 * 함수이름 : setBicycleStatusRented
 * 기능 : 자전거 대여 상태를 true로 저장
 * 전달인자 : 없음
 * 반환 값 : 현재 자전거 객체 포인터
 */
Bicycle* Bicycle::setBicycleStatusRented() {
    
    isRented_ = true;
    return (this);
}

/* 
 * 함수이름 : getBicycleId
 * 기능 : 자전거 ID 조회
 * 전달인자 : 없음
 * 반환 값 :
 *      - string : 자전거 ID
 */
string Bicycle::getBicycleId() {
    
    return (bicycleId_);
}

/* 
 * 함수이름 : getBicycleName
 * 기능 : 자전거 이름 조회
 * 전달인자 : 없음
 * 반환 값 :
 *      - string : 자전거 이름
 */
string Bicycle::getBicycleName() {

    return (bicycleName_);
}