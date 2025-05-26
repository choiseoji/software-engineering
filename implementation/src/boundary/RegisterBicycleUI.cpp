#include "../../include/boundary/RegisterBicycleUI.h"

/* 
 * 함수이름 : RegisterBicycleUI
 * 기능 : RegisterBicycleUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - registerBicycle : 자전거 등록 로직을 처리하는 registerBicycle control 객체 참조
 * 반환 값 : 없음
 */
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& registerBicycle) : registerBicycle_(registerBicycle) {}

/*
 * 함수이름 : inputBicycleInfo
 * 기능 : 입력 파일에서 자전거 정보를 받아 등록후, 출력파일에 출력
 * 전달인자 :
 *      - inFp : 입력 파일 스트림
 *      - registeredBicycle : 등록된 자전거 목록을 관리하는 객체
 *      - outFp : 출력 파일 스트림
 * 반환 값 : 없음
 */
void RegisterBicycleUI::inputBicycleInfo(ifstream& inFp, RegisteredBicycle& registeredBicycle, ofstream& outFp) {

    string id, password;

    inFp >> id >> password;
    pair<string, string> bicycleInfo = registerBicycle_.registerBicycle(id, password, registeredBicycle);
    outFp << "3.1. 자전거 등록\n";
    outFp << "> " << bicycleInfo.first << " " << bicycleInfo.second << "\n\n";
}