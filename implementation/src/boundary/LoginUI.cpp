#include "../../include/boundary/LoginUI.h"

void LoginUI::inputIdAndPassword(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id, password;
    iss >> id >> password;

    // 출력
    out_fp << "2.1. 로그인\n";
    out_fp << "> " << login_.loginUser(id, password, registeredUser) << "\n";
}