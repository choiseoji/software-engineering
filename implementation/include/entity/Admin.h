#ifndef ADMIN_H
# define ADMIN_H

# include "User.h"

// User를 상속받는 Admin entity 클래스 정의
class Admin : public User {

private:

public:
    Admin();  // Admin 생성자
    
};

#endif