#ifndef REGISTER_BICYCLE_UI_H
# define REGISTER_BICYCLE_UI_H

#include "../../include/control/RegisterBicycle.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class RegisterBicycleUI {

private:
    RegisterBicycle& registerBicycle_;

public:
    RegisterBicycleUI(RegisterBicycle& registerBicycle);
    void inputBicycleInfo(ifstream& in_fp, RegisteredBicycle& registeredBicycle, ofstream& out_fp);
};

#endif