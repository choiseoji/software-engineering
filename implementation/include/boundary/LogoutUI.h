#ifndef LOGOUT_UI_H
# define LOGOUT_UI_H

#include "../../include/control/Logout.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LogoutUI {

private:
    Logout logout_;

public:
    void logoutRequest(RegisteredUser& registeredUser, ofstream& out_fp);
};

#endif