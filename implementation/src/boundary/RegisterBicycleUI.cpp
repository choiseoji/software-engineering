#include "../../include/boundary/RegisterBicycleUI.h"

void RegisterBicycleUI::inputBicycleInfo(istringstream& iss, RegisteredBicycle& registeredBicycle, ofstream& out_fp) {

    string id, password;
    iss >> id >> password;

    // 출력
    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << registerBicycle_.registerBicycle(id, password, registeredBicycle) << "\n";
}