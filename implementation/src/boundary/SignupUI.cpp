#include "../../include/boundary/SignupUI.h"

void SignupUI::inputInformation(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id, password, phone_number;
    iss >> id >> password >> phone_number;

    // 출력
    out_fp << "1.1. 회원가입\n";
    out_fp << "> " << signup_.signupUser(id, password, registeredUser) << "\n";
}