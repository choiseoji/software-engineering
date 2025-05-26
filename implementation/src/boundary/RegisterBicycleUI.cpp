#include "../../include/boundary/RegisterBicycleUI.h"

void RegisterBicycleUI::inputBicycleInfo(ifstream& in_fp, RegisteredBicycle& registeredBicycle, ofstream& out_fp) {

    string id, password;
    in_fp >> id >> password;

    pair<string, string> bicycleInfo = registerBicycle_.registerBicycle(id, password, registeredBicycle);
    // 출력
    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << bicycleInfo.first << " " << bicycleInfo.second << "\n\n";
}