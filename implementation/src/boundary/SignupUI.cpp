#include "../../include/boundary/SignupUI.h"

void SignupUI::inputInformation(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id, password, phone_number;
    iss >> id >> password >> phone_number;

    tuple<string, string, string> userInfo = signup_.signupUser(id, password, phone_number, registeredUser);
    // 출력
    out_fp << "1.1. 회원가입\n";
    out_fp << "> " << get<0>(userInfo) << " " << get<1>(userInfo) << " " << get<2>(userInfo) << "\n\n";
}