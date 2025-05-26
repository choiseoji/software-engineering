#include "../../include/boundary/RentedBicycleInfoUI.h"

void RentedBicycleInfoUI::viewRentedBicycleRequest(RegisteredUser& registeredUser, ofstream& out_fp) {

    // 출력
    out_fp << "5.1. 자전거 대여 리스트\n";

    vector<pair<string, string> > result = rentedBicycleInfo_.viewRentedBicycle(registeredUser);
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++) {

        out_fp << "> " << result[i].first << " " << result[i].second << "\n";
    }
    out_fp << "\n";
}