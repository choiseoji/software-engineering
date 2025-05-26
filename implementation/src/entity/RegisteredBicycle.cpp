#include "../../include/entity/RegisteredBicycle.h"

/*
 * 함수이름 : addNewBicycle
 * 기능 : 새로운 자전거 등록
 * 전달인자 :
 *      - bicycle : 등록할 자전거
 * 반환 값 : 없음
 */
void RegisteredBicycle::addNewBicycle(Bicycle* bicycle) {

    registeredBicycles_.push_back(bicycle);
}

/*
 * 함수이름 : findBicycleById
 * 기능 : 자전거 id로 자전거 조회
 * 전달인자 :
 *      - id : 자전거 id
 * 반환 값 :
 *      - Bicycle : 조회 성공하면 자전거 (Bicycle), 실패하면 (NULL)
 */
Bicycle* RegisteredBicycle::findBicycleById(const string& id) {

    for(Bicycle* bicycle : registeredBicycles_) {

        if (bicycle->getBicycleId() == id) {
            return (bicycle);
        }
    }
    return (NULL);
}