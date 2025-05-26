#ifndef USER_H
# define USER_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

// 유저 정보를 저장하는 User 엔티티 클래스 정의
class User {

private:
    string id_;    // 유저 id
    string password_;  // 유저 password
    bool isLogined_;  // 유저 로그인 상태

public:
    User(const string& id, const string& password);  // 유저 id, password를 받는 User 생성자
    
    bool checkIdAndPassword(const string& id, const string& password) const;  // 입력된 id, password가 유저 정보와 일치하는지 확인
    void setLoginStatus();  // 로그인 상태를 true로 저장
    bool checkLoginStatus();  // 로그인 상태 조회
    void setLogoutStatus();  // 로그인 상태를 false로 저장

    string getUserId();  // 유저 id 조회
    string getUserPassword();  // 유저 password 조회

    virtual ~User() {}  // 가상 소멸자

};

#endif