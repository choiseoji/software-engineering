#include "../../include/entity/User.h"

/*
 * 함수이름 : User
 * 기능 : 사용자 생성, id와 비밀번호 초기화, 로그인 상태 false로 설정
 * 전달인자 :
 *      - id : 사용자 id
 *      - password : 사용자 비밀번호
 * 반환 값 : 없음
 */
User::User(const string& id, const string& password) {
    
    id_ = id;
    password_ = password;
    isLogined_ = false;
}

/*
 * 함수이름 : checkIdAndPassword
 * 기능 : 전달받은 id와 비밀번호가 사용자의 정보와 일치하는지 확인
 * 전달인자 :
 *      - id : 비교할 사용자 id
 *      - password : 비교할 비밀번호
 * 반환 값 : 
 *      - bool : 일치하면 (true), 아니면 (false)
 */
bool User::checkIdAndPassword(const string& id, const string& password) const {

    if (id_ == id && password_ == password)
        return (true);
    return (false);
}

/*
 * 함수이름 : setLoginStatus
 * 기능 : 로그인 상태를 true로 설정
 * 전달인자 : 없음
 * 반환 값 : 없음
 */
void User::setLoginStatus() {

    isLogined_ = true;
}

/*
 * 함수이름 : checkLoginStatus
 * 기능 : 현재 로그인 상태 확인
 * 전달인자 : 없음
 * 반환 값 :
 *      - bool : 로그인 상태이면 (true), 로그아웃 상태이면 (false)
 */
bool User::checkLoginStatus() {
    
    return (isLogined_);
}

/*
 * 함수이름 : setLogoutStatus
 * 기능 : 로그인 상태를 false로 설정
 * 전달인자 : 없음
 * 반환 값 : 없음
 */
void User::setLogoutStatus() {

    isLogined_ = false;
}

/*
 * 함수이름 : getUserId
 * 기능 : 사용자 id 조회
 * 전달인자 : 없음
 * 반환 값 : 사용자 id
 */
string User::getUserId() {

    return (id_);
}

/*
 * 함수이름 : getUserPassword
 * 기능 : 사용자 비밀번호 조회
 * 전달인자 : 없음
 * 반환 값 : 사용자 비밀번호
 */
string User::getUserPassword() {

    return (password_);
}
