#include "../../include/control/RentedBicycleInfo.h"

/*
 * 함수이름 : RentedBicycleInfo
 * 기능 : 현재 로그인한 유저가 대여한 자전거 목록 조회
 * 전달인자 :
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 * 반환 값 :
 *      - vector<pair<string, string>> : 로그인한 사용자가 대여한 자전거의 (자전거 ID, 자전거 이름) 목록
 */
vector<pair<string, string> > RentedBicycleInfo::viewRentedBicycle(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    vector<pair<string, string> > result;

    for (User* user : users) { 
        
        if (user->checkLoginStatus()) {

            Member* member = dynamic_cast<Member*>(user);
            if (member) {

                vector<Bicycle*> bicycles = member->listRentedBicycle();
                for (Bicycle* b : bicycles) {
    
                    result.push_back(make_pair(b->getBicycleId(), b->getBicycleName()));
                }
            }
        }
    }
    return (result);
}