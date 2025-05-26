#ifndef LOGIN_UI_H
# define LOGIN_UI_H

#include "../../include/control/Login.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LoginUI {

private:
    Login& login_;

public:
    LoginUI(Login& login);
    void inputIdAndPassword(ifstream& in_fp, RegisteredUser& registeredUser, ofstream& out_fp);
};

#endif