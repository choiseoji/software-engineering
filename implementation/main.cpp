#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "./include/entity/RegisteredBicycle.h"
#include "./include/entity/RegisteredUser.h"
#include "./include/entity/Admin.h"

#include "./include/boundary/ExitUI.h"
#include "./include/boundary/SignupUI.h"
#include "./include/boundary/LoginUI.h"
#include "./include/boundary/LogoutUI.h"
#include "./include/boundary/RegisterBicycleUI.h"
#include "./include/boundary/RentBicycleUI.h"
#include "./include/boundary/RentedBicycleInfoUI.h"
using namespace std;

void doTask(ifstream& in_fp, ofstream& out_fp);

int main() {

    // input, output
    ifstream in_fp;
    ofstream out_fp;
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask(in_fp, out_fp);

    out_fp.close();
    in_fp.close();
    return (0);
}

void doTask(ifstream& in_fp, ofstream& out_fp) {

    // 초기 객체 생성
    RegisteredBicycle registeredBicycle;
    RegisteredUser registeredUser;
    User* adminUser = new Admin();
    registeredUser.addNewMember(adminUser);

    // boundary 객체 생성
    ExitUI exitUi;
    SignupUI signupUi;
    LoginUI loginUi;
    LogoutUI logoutUi;
    RegisterBicycleUI registerBicycleUi;
    RentBicycleUI rentBicycleUi;
    RentedBicycleInfoUI rentedBicycleInfoUi;

    // parsing
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {

        in_fp >> menu_level_1 >> menu_level_2;

        switch(menu_level_1) {

            case 1:
                switch(menu_level_2) {

                    // 회원가입 [id] [password] [phone-number]
                    case 1:
                        signupUi.inputInformation(in_fp, registeredUser, out_fp);
                        break ;
                }
                break ;

            case 2:
                switch(menu_level_2) {

                    // 로그인 [id] [password]
                    case 1:
                        loginUi.inputIdAndPassword(in_fp, registeredUser, out_fp);
                        break ;

                    // 로그아웃
                    case 2:
                        logoutUi.logoutRequest(registeredUser, out_fp);
                        break;
                }
                break ;

            case 3:
                switch(menu_level_2) {

                    // 자전거 등록 [id] [name]
                    case 1: 
                        registerBicycleUi.inputBicycleInfo(in_fp, registeredBicycle, out_fp);
                        break ;
                }
                break ;
            
            case 4:
                switch(menu_level_2) {

                    // 자전거 대여 [id]
                    case 1: 
                        rentBicycleUi.rentRequest(in_fp, registeredBicycle, registeredUser, out_fp);
                        break ;
                }
                break ;

            case 5:
                switch(menu_level_2) {

                    // 자전거 대여 리스트
                    case 1:
                        rentedBicycleInfoUi.viewRentedBicycleRequest(registeredUser, out_fp);
                        break;
                }
                break ;

            case 6:
                switch(menu_level_2) {

                    // 시스템 종료
                    case 1:
                        exitUi.exitRequest(out_fp, is_program_exit);
                        break ; 
                }
        }
    }
}