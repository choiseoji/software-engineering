#ifndef REGISTERED_BICYCLE_H
# define REGISTERED_BICYCLE_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

class RegisteredBicycle {

private:
    vector<Bicycle*> registered_bicycles_;   // Bicycle 포인터 저장

public:
    void addNewBicycle(Bicycle* bicycle);
    Bicycle* findBicycleById(const string& id);
};

#endif