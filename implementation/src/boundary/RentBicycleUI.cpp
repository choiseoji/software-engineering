#include "../../include/boundary/RentBicycleUI.h"

void RentBicycleUI::rentRequest(istringstream& iss, RegisteredBicycle& registeredBicycle, RegisteredUser& registeredUser, ofstream& out_fp) {

    string id;
    iss >> id;

    pair<string, string> rentedBicycleInfo = rentBicycle_.rentBicycle(id, registeredUser, registeredBicycle);

    // 출력
    out_fp << "4.1. 자전거 대여\n";
    out_fp << "> " << rentedBicycleInfo.first << " " << rentedBicycleInfo.second << "\n\n";
}