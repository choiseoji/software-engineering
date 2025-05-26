#include "../../include/entity/RegisteredUser.h"

/*
 * 함수이름 : addNewMember
 * 기능 : 새로운 유저 등록
 * 전달인자 :
 *      - user : 추가할 유저
 * 반환 값 : 없음
 */
void RegisteredUser::addNewMember(User* user) {

    registeredUsers_.push_back(user);
}

/*
 * 함수이름 : listUser
 * 기능 : 등록된 유저 목록 조회
 * 전달인자 : 없음
 * 반환 값 :
 *      - vector<User*> : 등록된 유저 목록
 */
vector<User*>& RegisteredUser::listUser() {

    return (registeredUsers_);
}