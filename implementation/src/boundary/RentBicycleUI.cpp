#include "../../include/boundary/RentBicycleUI.h"

/* 
 * 함수이름 : RentBicycleUI
 * 기능 : RentBicycleUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - rentBicycle : 자전거 대여 로직을 처리하는 RentBicycle control 객체 참조
 * 반환 값 : 없음
 */
RentBicycleUI::RentBicycleUI(RentBicycle& rentBicycle) : rentBicycle_(rentBicycle) {}

/*
 * 함수이름 : rentRequest
 * 기능 : rentBicycle 컨트롤에 자전거 대여 요청
 * 전달인자 :
 *      - inFp : 입력 파일 스트림
 *      - registeredBicycle : 등록된 자전거 목록을 관리하는 객체
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 *      - outFp : 출력 파일 스트림
 * 반환 값 : 없음
 */
void RentBicycleUI::rentRequest(ifstream& inFp, RegisteredBicycle& registeredBicycle, RegisteredUser& registeredUser, ofstream& outFp) {

    string id;

    inFp >> id;
    pair<string, string> rentedBicycleInfo = rentBicycle_.rentBicycle(id, registeredUser, registeredBicycle);
    outFp << "4.1. 자전거 대여\n";
    outFp << "> " << rentedBicycleInfo.first << " " << rentedBicycleInfo.second << "\n\n";
}