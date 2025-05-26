#ifndef LOGOUT_H
# define LOGOUT_H

# include "../entity/RegisteredUser.h"

// Logout 컨트롤 클래스 정의
class Logout {

private:

public:
    string logoutUser(RegisteredUser& registeredUser);   // 유저 로그아웃 처리
};

#endif