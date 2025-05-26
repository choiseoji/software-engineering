#include "../../include/control/Logout.h"

/*
 * 함수이름 : logoutUser
 * 기능 : 현재 로그인하고 있는 유저를 찾아 로그아웃 처리
 * 전달인자 :
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 * 반환 값 :
 *      - string : 로그아웃에 성공한 경우 (userId), 실패한 경우 ("")
 */
string Logout::logoutUser(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {

            user->setLogoutStatus();
            return (user->getUserId());
        }
    }
    return ("");
}