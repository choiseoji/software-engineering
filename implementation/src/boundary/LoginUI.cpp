#include "../../include/boundary/LoginUI.h"

/* 
 * 함수이름 : LoginUI
 * 기능 : LoginUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - login : 로그인 로직을 처리하는 Login control 객체 참조
 * 반환 값 : 없음
 */
LoginUI::LoginUI(Login& login) : login_(login) {}

/*
 * 함수이름 : inputIdAndPassword
 * 기능 : 입력 파일에서 로그인 정보를 받아 로그인을 처리하고, 출력 파일에 출력
 * 전달인자 :
 *      - inFp : 입력 파일 스트림
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 *      - outFp : 출력 파일 스트림
 * 반환 값 : 없음
 */
void LoginUI::inputIdAndPassword(ifstream& inFp, RegisteredUser& registeredUser, ofstream& outFp) {

    string id, password;

    inFp >> id >> password;
    pair<string, string> loginUserInfo = login_.loginUser(id, password, registeredUser);
    if (loginUserInfo.first != "" && loginUserInfo.second != "") {

        outFp << "2.1. 로그인\n";
        outFp << "> " << loginUserInfo.first << " " << loginUserInfo.second << "\n\n";
    }
}