#ifndef BICYCLE_H
# define BICYCLE_H

# include <string>
using namespace std;

// 자전거 정보를 담는 Bicycle 엔티티 클래스 정의
class Bicycle {

private:
    string bicycleId_;   // 자전거 id
    string bicycleName_;  // 자전거 name
    bool isRented_;   // 자전거 대여 여부

public:
    Bicycle(const string& bicycleId, const string& bicycleName);  // 자전거 id와 name을 받는 Bicycle 생성자

    Bicycle* setBicycleStatusRented();   // 자전거 대여 상태로 저장
    string getBicycleId();  // 자전거 id 조회
    string getBicycleName();  // 자전거 name 조회
    
};

# endif