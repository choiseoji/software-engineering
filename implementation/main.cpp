#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// entity 
#include "./include/entity/RegisteredBicycle.h"
#include "./include/entity/RegisteredUser.h"
#include "./include/entity/Admin.h"

// boundary
#include "./include/boundary/ExitUI.h"
#include "./include/boundary/SignupUI.h"
#include "./include/boundary/LoginUI.h"
#include "./include/boundary/LogoutUI.h"
#include "./include/boundary/RegisterBicycleUI.h"
#include "./include/boundary/RentBicycleUI.h"
#include "./include/boundary/RentedBicycleInfoUI.h"

// control
#include "./include/control/Exit.h"
#include "./include/control/Signup.h"
#include "./include/control/Login.h"
#include "./include/control/Logout.h"
#include "./include/control/RegisterBicycle.h"
#include "./include/control/RentBicycle.h"
#include "./include/control/RentedBicycleInfo.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask(ifstream& inFp, ofstream& outFp);

int main() {

    // input, output
    ifstream inFp;
    ofstream outFp;
    inFp.open(INPUT_FILE_NAME);
    outFp.open(OUTPUT_FILE_NAME);

    doTask(inFp, outFp);

    outFp.close();
    inFp.close();
    return (0);
}

void doTask(ifstream& inFp, ofstream& outFp) {

    // 초기 객체 생성
    RegisteredBicycle registeredBicycle;
    RegisteredUser registeredUser;
    User* adminUser = new Admin();
    registeredUser.addNewMember(adminUser);

    // control 객체 생성
    Exit exit;
    Signup signup;
    Login login;
    Logout logout;
    RegisterBicycle registerBicycle;
    RentBicycle rentBicycle;
    RentedBicycleInfo rentedBicycleInfo;

    // boundary 객체 생성
    ExitUI exitUi(exit);
    SignupUI signupUi(signup);
    LoginUI loginUi(login);
    LogoutUI logoutUi(logout);
    RegisterBicycleUI registerBicycleUi(registerBicycle);
    RentBicycleUI rentBicycleUi(rentBicycle);
    RentedBicycleInfoUI rentedBicycleInfoUi(rentedBicycleInfo);

    // parsing
    int menuLevel1 = 0, menuLevel2 = 0;
    int isProgramExit = 0;
    while (!isProgramExit) {

        inFp >> menuLevel1 >> menuLevel2;
        switch(menuLevel1) {

            case 1:
                switch(menuLevel2) {

                    // 회원가입 [id] [password] [phone-number]
                    case 1:
                        signupUi.inputInformation(inFp, registeredUser, outFp);
                        break ;
                }
                break ;

            case 2:
                switch(menuLevel2) {

                    // 로그인 [id] [password]
                    case 1:
                        loginUi.inputIdAndPassword(inFp, registeredUser, outFp);
                        break ;

                    // 로그아웃
                    case 2:
                        logoutUi.logoutRequest(registeredUser, outFp);
                        break;
                }
                break ;

            case 3:
                switch(menuLevel2) {

                    // 자전거 등록 [id] [name]
                    case 1: 
                        registerBicycleUi.inputBicycleInfo(inFp, registeredBicycle, outFp);
                        break ;
                }
                break ;
            
            case 4:
                switch(menuLevel2) {

                    // 자전거 대여 [id]
                    case 1: 
                        rentBicycleUi.rentRequest(inFp, registeredBicycle, registeredUser, outFp);
                        break ;
                }
                break ;

            case 5:
                switch(menuLevel2) {

                    // 자전거 대여 리스트
                    case 1:
                        rentedBicycleInfoUi.viewRentedBicycleRequest(registeredUser, outFp);
                        break;
                }
                break ;

            case 6:
                switch(menuLevel2) {

                    // 시스템 종료
                    case 1:
                        exitUi.exitRequest(outFp, isProgramExit);
                        break ; 
                }
        }
    }
}