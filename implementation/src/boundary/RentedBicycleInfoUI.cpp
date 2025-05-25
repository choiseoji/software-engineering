#include "../../include/boundary/RentedBicycleInfoUI.h"

void RentedBicycleInfoUI::viewRentedBicycleRequest(istringstream& iss, RegisteredUser& registeredUser, ofstream& out_fp) {

    // 출력
    out_fp << "5.1. 자전거 대여 리스트\n";

    vector<string> result = rentedBicycleInfo_.viewRentedBicycle(registeredUser);
    for(int i = 0; i < result.size(); i++) {

        out_fp << "> " << result[i];
    }
    out_fp << "\n";
}