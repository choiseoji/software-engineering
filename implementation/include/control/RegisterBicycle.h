#ifndef REGISTER_BICYCLE_H
# define REGISTER_BICYCLE_H

# include "../entity/Bicycle.h"
# include "../entity/RegisteredBicycle.h"
# include <string>
using namespace std;

// RegisterBicycle 컨트롤 클래스 정의
class RegisterBicycle {

private:

public:
    pair<string, string> registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle);  // 자전거 등록 처리
};

#endif