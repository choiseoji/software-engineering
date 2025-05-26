#include "../../include/entity/Admin.h"

/* 
 * 함수이름 : Admin
 * 기능 : Admin 엔티티 클래스의 생성자, 기본 ID와 비밀번호를 "admin"으로 설정
 * 전달인자 : 없음
 * 반환 값 : 없음
 */
Admin::Admin() : User("admin", "admin") {}