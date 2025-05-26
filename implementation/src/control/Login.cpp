#include "../../include/control/Login.h"

/*
 * 함수이름 : loginUser
 * 기능 : 입력받은 ID, 비밀번호와 일치하는 유저를 찾으면 로그인 완료
 * 전달인자 :
 *      - id : 사용자 ID
 *      - password : 사용자 비밀번호
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 * 반환 값 :
 *      - pair<string, string> : 로그인에 성공한 경우 (id, password), 실패한 경우 ("", "")
 */
pair<string, string> Login::loginUser(const string& id, const string& password, RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    
    for (User* user : users) { 

        if (user->checkIdAndPassword(id, password)) {
            
            user->setLoginStatus();
            return make_pair(user->getUserId(), user->getUserPassword());
        }
    }
    return make_pair("", "");
}