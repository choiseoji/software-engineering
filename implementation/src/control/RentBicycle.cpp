#include "../../include/control/RentBicycle.h"

/*
 * 함수이름 : rentBicycle
 * 기능 : 유저가 대여한 자전거 목록에 해당 자전거 추가
 * 전달인자 :
 *      - id : 대여할 자전거 아이디
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 *      - registeredBicycle : 등록된 자전거 목록을 관리하는 객체
 * 반환 값 : 
 *      - pair<string, string> : 자전거 대여에 성공할 경우 (자전거 id, name), 실패한 경우 ("", "")
 */
pair<string, string> RentBicycle::rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {

            Member* member = dynamic_cast<Member*>(user);
            if (member) {
                
                Bicycle* bicycle = registerBicycle.findBicycleById(id);
                member->addRentedBicycle(bicycle);
                return make_pair(bicycle->getBicycleId(), bicycle->getBicycleName());
            }
        }
    }
    return make_pair("", "");
}