#include "../../include/boundary/ExitUI.h"

/* 
 * 함수이름 : ExitUI
 * 기능 : ExitUI 바운더리 클래스의 생성자
 * 전달인자 : 
 *      - exit : 종료 로직을 처리하는 Exit control 객체 참조
 * 반환 값 : 없음
 */
ExitUI::ExitUI(Exit& exit) : exit_(exit) {}

/*
 * 함수이름 : exitRequest
 * 기능 : Exit 컨트롤 객체에게 종료 요청
 * 전달인자 :
 *      - out_fp : 출력 파일 스트림
 *      - isProgramExit : program 종료 여부 저장 변수
 * 반환 값 : 없음
 */
void ExitUI::exitRequest(ofstream& outFp, int& isProgramExit) {

    exit_.exitRequest(isProgramExit);
    outFp << "6.1. 종료\n";
}