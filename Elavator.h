#include<iostream>
#include "Stack.h"
using namespace std ;
#ifndef BUILDING_ELAVATORS_H
#define BUILDING_ELAVATORS_H


class Elavator {
private:
    int MaximumLoad ;
    int NumberOfFloors ;
    int NumberOfPassengers = 0 ;
    Stack move ;
    set < int > unique ;
public:
    Elavator() ;
    Elavator(int mx , int floors) ;
    void setMaximumLoad(int mx) ;
    int getMaximumLoad() const ;
    void setNumberOfFloors(int num) ;
    int getNumberOfFloors() const ;
    int getNumberofPassengers() const ;
    void openToEnter(int n) ;
    void checkLoad(int n) ;
    void openToExist(int n) ;
    void close(int state) ;
    void Move() ;
};


#endif //BUILDING_ELAVATORS_H
