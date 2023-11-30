#include <iostream>
#include "Elavator.h"
#include "Elavator.cpp"
#include "Apartment.h"
#include "Apartment.cpp"
int main() {
    Elavator e(7 , 12) ;
    cout << "Number of Passengers : " << e.getNumberofPassengers() << endl;
    e.openToEnter(5) ;
    cout << "Number of Passengers : " << e.getNumberofPassengers() << endl;
    e.openToExist(3) ;
    cout << "Number of Passengers : " << e.getNumberofPassengers() << endl;
    e.openToEnter(10) ;
    cout << "Number of Passengers : " << e.getNumberofPassengers() << endl;
    Apartment a ;
    Kitchen k ;
    k.SetRoomHeight(10) ;
    k.SetRoomWidth(5) ;
    k.SetRoomColor("blue") ;
    k.SetStoveColor("black") ;
   a.GetStoveColor() ;
    return 0;
}
  