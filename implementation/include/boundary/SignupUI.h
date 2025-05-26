#ifndef SIGNUP_UI_H
# define SIGNUP_UI_H

#include "../../include/control/Signup.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class SignupUI {

private:
    Signup signup_;

public:
    void inputInformation(ifstream& in_fp, RegisteredUser& registeredUser, ofstream& out_fp);
};

#endif