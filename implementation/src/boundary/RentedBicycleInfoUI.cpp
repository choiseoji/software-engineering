#include "../../include/boundary/RentedBicycleInfoUI.h"

/* 
 * 함수이름 : RentedBicycleInfoUI
 * 기능 : RentedBicycleInfoUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - rentedBicycleInfo : 대여한 자전거 조회 기능을 하는 rentedBicycleInfo control 객체 참조
 * 반환 값 : 없음
 */
RentedBicycleInfoUI::RentedBicycleInfoUI(RentedBicycleInfo& rentedBicycleInfo) : rentedBicycleInfo_(rentedBicycleInfo) {}

/*
 * 함수이름 : viewRentedBicycleRequest
 * 기능 : rentedBicycleInfo_ 에서 받아온 정보 출력 파일에 출력
 * 전달인자 :
 *      - registeredUser : 등록된 사용자 목록을 관리하는 객체
 *      - outFp : 출력 파일 스트림
 * 반환 값 : 없음
 */
void RentedBicycleInfoUI::viewRentedBicycleRequest(RegisteredUser& registeredUser, ofstream& outFp) {

    outFp << "5.1. 자전거 대여 리스트\n";

    vector<pair<string, string> > result = rentedBicycleInfo_.viewRentedBicycle(registeredUser);
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++) {

        outFp << "> " << result[i].first << " " << result[i].second << "\n";
    }
    outFp << "\n";
}