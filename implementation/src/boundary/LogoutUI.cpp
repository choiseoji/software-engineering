#include "../../include/boundary/LogoutUI.h"

void LogoutUI::logoutRequest(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    // 출력
    out_fp << "2.2. 로그아웃\n";
    out_fp << "> " << logout_.logoutUser(registeredUser) << "\n\n"; 
}