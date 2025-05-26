#include "../../include/boundary/LogoutUI.h"

/* 
 * 함수이름 : LogoutUI
 * 기능 : LogoutUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - logout : 로그아웃 요청 처리하는 logout control 객체 참조
 * 반환 값 : 없음
 */
LogoutUI::LogoutUI(Logout& logout) : logout_(logout) {}

/*
    함수이름 : logoutRequest
    기능 : logout 컨트롤 클래스에게 로그아웃 요청
    전달인자 : 
        - registeredUser : 등록된 사용자 목록을 관리하는 객체
        - outFp : 출력 파일 스트림
    반환 값: 없음
*/
void LogoutUI::logoutRequest(RegisteredUser& registeredUser, ofstream& out_fp) {

    string logoutUserId = logout_.logoutUser(registeredUser);
    if (!logoutUserId.empty()) {

        // 출력
        out_fp << "2.2. 로그아웃\n";
        out_fp << "> " << logoutUserId << "\n\n"; 
    }
}