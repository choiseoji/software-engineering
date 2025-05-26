#ifndef MEMBER_H
# define MEMBER_H

# include "User.h"
# include "MemberRentedBicycleCollection.h"
# include <vector>
using namespace std;

// User를 상속받는 Member entity 클래스 정의
class Member : public User {

private:
    string phoneNumber_;   // 사용자 휴대폰번호
    MemberRentedBicycleCollection rentedBicycleCollection_;   // 사용자가 대여하고 있는 자전거 집합

public:
    Member(const string& id, const string& password, const string& phoneNumber);  // 사용자 id, password, 휴대폰 번호를 받는 Member 생성자
    
    string getMemberPhonenumber();  // 휴대폰번호 조회
    void addRentedBicycle(Bicycle* bicycle);  // 대여 집합에 자전거 등록
    vector<Bicycle*> listRentedBicycle();  // 대여하고있는 자전거 조회
    
};

#endif