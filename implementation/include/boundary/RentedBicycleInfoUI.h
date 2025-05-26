#ifndef RENTED_BICYCLE_INFO_UI_H
# define RENTED_BICYCLE_INFO_UI_H

#include "../../include/control/RentedBicycleInfo.h"
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class RentedBicycleInfoUI {

private:
    RentedBicycleInfo& rentedBicycleInfo_;

public:
    RentedBicycleInfoUI(RentedBicycleInfo& rentedBicycleInfo);
    void viewRentedBicycleRequest(RegisteredUser& registeredUser, ofstream& out_fp);

};

#endif