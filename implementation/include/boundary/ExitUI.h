#ifndef EXIT_UI_H
# define EXIT_UI_H

#include "../control/Exit.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class ExitUI {

private:
    Exit& exit_;

public:
    ExitUI(Exit& exit);
    void exitRequest(ofstream& out_fp, int& is_program_exit);

};

#endif