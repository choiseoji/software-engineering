#include "../../include/boundary/SignupUI.h"

/* 
 * 함수이름 : SignupUI
 * 기능 : SignupUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - signup : 회원가입 로직을 처리하는 Signup control 객체 참조
 * 반환 값 : 없음
 */
SignupUI::SignupUI(Signup& signup) : signup_(signup) {}

/*
    함수이름 : inputInformation
    기능 : 입력 파일에서 회원 정보를 읽어 회원가입 처리 후, 출력 파일에 출력
    전달인자 : 
        - inFp : 입력 파일 스트림
        - registeredUser : 등록된 사용자 목록을 관리하는 객체
        - outFp : 출력 파일 스트림
    반환 값: 없음
*/
void SignupUI::inputInformation(ifstream& inFp, RegisteredUser& registeredUser, ofstream& outFp) {

    string id, password, phoneNumber;

    inFp >> id >> password >> phoneNumber;
    signup_.signupUser(id, password, phoneNumber, registeredUser);
    outFp << "1.1. 회원가입\n";
    outFp << "> " << id << " " << password << " " << phoneNumber << "\n\n";
}