#include "../../include/control/Exit.h"

/* 
 * 함수이름 : exitRequest
 * 기능 : 넘겨받은 변수에 프로그램 종료를 뜻하는 값 저장
 * 전달인자 : 
 *      - isProgramExit : 프로그램 종료 여부를 저장하는 변수
 * 반환 값 : 없음
 */
void Exit::exitRequest(int& isProgramExit) {

    isProgramExit = 1;
}