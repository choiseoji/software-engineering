#include "../../include/control/Signup.h"

/*
 * 함수이름 : signupUser
 * 기능 : 회원 정보를 받아 새로운 User를 생성하여 registeredUser에 등록
 * 전달인자 :
 *      - id : 회원 아이디
 *      - password : 회원 비밀번호
 *      - phoneNumber : 회원 전화번호
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 * 반환 값 : 없음
 */
void Signup::signupUser(const string& id, const string& password, const string& phoneNumber,RegisteredUser& registeredUser) {

    User* newUser = new Member(id, password, phoneNumber);
    registeredUser.addNewMember(newUser);
}