#include "../../include/boundary/SignupUI.h"

void SignupUI::inputInformation(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id, password, phone_number;
    iss >> id >> password >> phone_number;

    signup_.signupUser(id, password, phone_number, registeredUser);
    // 출력
    out_fp << "1.1. 회원가입\n";
    out_fp << "> " << id << " " << password << " " << phone_number << "\n\n";
}