#ifndef REGISTERED_BICYCLE_H
# define REGISTERED_BICYCLE_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

// 자전거 저장하는 RegisteredBicycle 엔티티 클래스 정의
class RegisteredBicycle {

private:
    vector<Bicycle*> registeredBicycles_;   // 등록된 자전거 

public:
    void addNewBicycle(Bicycle* bicycle);   // 자전거 새로 등록
    Bicycle* findBicycleById(const string& id);   // id로 자전거 조회
    
};

#endif