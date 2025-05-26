#include "../../include/boundary/LogoutUI.h"

LogoutUI::LogoutUI(Logout& logout) : logout_(logout) {}

void LogoutUI::logoutRequest(RegisteredUser& registeredUser, ofstream& out_fp) {

    string logoutUserId = logout_.logoutUser(registeredUser);
    if (!logoutUserId.empty()) {

        // 출력
        out_fp << "2.2. 로그아웃\n";
        out_fp << "> " << logoutUserId << "\n\n"; 
    }
}