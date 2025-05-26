#include "../../include/boundary/ExitUI.h"

void ExitUI::exitRequest(ofstream& out_fp, int& is_program_exit) {

    exit_.exitRequest(is_program_exit);
    out_fp << "6.1. 종료\n";
}