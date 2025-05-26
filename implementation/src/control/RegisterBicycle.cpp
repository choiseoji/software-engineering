#include "../../include/control/RegisterBicycle.h"

/*
 * 함수이름 : registerBicycle
 * 기능 : 새로운 Bicycle 생성해서, RegisteredBicycle에 추가
 * 전달인자 :
 *      - id : 자전거 아이디
 *      - name : 자전거 이름
 *      - registeredBicycle :  등록된 자전거 목록을 관리하는 객체
 * 반환 값 :
 *      - pair<string, string> : 등록된 자전거 정보 (bicycleId, bicycleName)
 */
pair<string, string> RegisterBicycle::registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle) {

    Bicycle* newBicycle = new Bicycle(id, name);

    registeredBicycle.addNewBicycle(newBicycle);
    return make_pair(newBicycle->getBicycleId(), newBicycle->getBicycleName());
}