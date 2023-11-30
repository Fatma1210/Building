#include<iostream>
#include "Stack.h"
#include "Elavator.h"
using namespace std ;
Elavator ::Elavator() {

}
Elavator ::Elavator(int mx , int num) {
    MaximumLoad = mx ;
    NumberOfFloors = num ;
}
void Elavator ::setMaximumLoad(int mx) {
    MaximumLoad = mx ;
}
void Elavator ::setNumberOfFloors(int num) {
   NumberOfFloors = num ;
}
int Elavator ::getMaximumLoad() const {
    return MaximumLoad ;
}
int Elavator ::getNumberOfFloors() const {
    return NumberOfFloors ;
}
void Elavator ::openToEnter(int n) {
    n = min(n , MaximumLoad - NumberOfPassengers) ;
    NumberOfPassengers += n ;
    vector < int > floors ;
    Elavator ::close(1) ;
  for(int i = 0 ; i < n ; ++i) {
      int FloorTarget;
      cin >> FloorTarget;
      floors.push_back(FloorTarget);
  }
      Elavator :: move.push(floors) ;
}
void Elavator ::openToExist(int n) {
    Elavator :: NumberOfPassengers -= n ;
    for(int i = 0 ; i < n ; ++i){
        move.pop() ;
    }
    Elavator::close(2) ;
}
void Elavator ::close(int state) {
    if (state == 1) {
        cout << "Hello , Enter the floor you want to go : \n";
    }
    else if (state == 2) {
        cout << "See You Soon ^^  \n" ;
    }
}
int Elavator ::getNumberofPassengers() const {
    return NumberOfPassengers ;
}
