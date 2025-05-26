#ifndef EXIT_UI_H
# define EXIT_UI_H

#include "../control/Exit.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// ExitUI 바운더리 클래스 정의
class ExitUI {

private:
    Exit& exit_;    // exit control 객체

public:
    ExitUI(Exit& exit);   // 생성자에 exit 주입
    void exitRequest(ofstream& outFp, int& isProgramExit);   // 종료 요청

};

#endif