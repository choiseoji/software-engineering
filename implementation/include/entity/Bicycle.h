#ifndef BICYCLE_H
# define BICYCLE_H

# include <string>
using namespace std;

class Bicycle {

private:
    string bicycle_id_;
    string bicycle_name_;
    bool is_rented_;

public:
    Bicycle(const string& bicycle_id, const string& bicycle_name);

    Bicycle* setBicycleStatusRented();
    string getBicycleDetails();
    string getBicycleId();
};

# endif