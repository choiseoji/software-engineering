#include "../../include/boundary/LoginUI.h"

LoginUI::LoginUI(Login& login) : login_(login) {}

void LoginUI::inputIdAndPassword(ifstream& in_fp, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id, password;
    in_fp >> id >> password;

    pair<string, string> loginUserInfo = login_.loginUser(id, password, registeredUser);

    if (loginUserInfo.first != "" && loginUserInfo.second != "") {

        // 출력
        out_fp << "2.1. 로그인\n";
        out_fp << "> " << loginUserInfo.first << " " << loginUserInfo.second << "\n\n";
    }
}