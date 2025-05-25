#ifndef RENTED_BICYCLE_INFO_UI_H
# define RENTED_BICYCLE_INFO_UI_H

#include "../../include/control/RentedBicycleInfo.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class RentedBicycleInfoUI {

private:
    RentedBicycleInfo rentedBicycleInfo_;

public:
    void viewRentedBicycleRequest(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp);

};

#endif