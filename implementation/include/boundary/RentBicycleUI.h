#ifndef RENT_BICYCLE_UI_H
# define RENT_BICYCLE_UI_H

#include "../../include/control/RentBicycle.h"
#include <fstream>
#include <string>
#include <sstream>

class RentBicycleUI {

private:
    RentBicycle& rentBicycle_;

public:
    RentBicycleUI(RentBicycle& rentBicycle);
    void rentRequest(ifstream& in_fp, RegisteredBicycle& registeredBicycle, RegisteredUser& registeredUser, ofstream& out_fp);
};

#endif