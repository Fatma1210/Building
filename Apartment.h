#include <iostream>
using namespace std ;
#ifndef BUILDING_APARTMENT_H
#define BUILDING_APARTMENT_H
class Room{
public:
    double height ;
    double width ;
    string color ;
    Room();
    Room(double h , double w , string c) ;
    void SetRoomHeight(double h) ;
    void SetRoomWidth(double w) ;
    void SetRoomColor(string c) ;
    double GetRoomHeight() const ;
    double GetRoomWidth() const ;
    double GetRoomArea() const ;
    string GetRoomColor() const ;
};
class Apartment {
private:
    int NumberOfRooms ;
    int ApartmentNumber ;
    int ApartmentFloor ;
    Room Kitchen ;
    Room Bathroom ;
    Room Salon ;
    Room Sofa ;
    Room Livingroom ;
    Room Clothingroom ;
    Room Bedroom ;
    string FridgeColor ;
    string stovecolor ;
    int FlamesNumber ;
    int TVInches ;
    int NumberOfSalonObjects ;
    string salonColor ;
    int NumberOfSofaObjects ;
    string sofaColor ;
    string BedColor ;
    string ShovenirahColor ;
public:
    void setKitchencolor(Room room) ;
    string GetKitchencolor() const ;
    void setKitchenwidth(Room room) ;
    void setKitchenheight(Room room) ;
    void SetNumberOfRooms(int num) ;
    int GetNumberOfRooms() const ;
    void SetApartmentNumber(int num) ;
    int GetApartmentNumber() const ;
    void SetApartmentFloor(int num) ;
    int GetApartmentFloor() const ;
    void SetFridgeColor(string color) ;
    string GetFridgeColor() const ;
    void SetStoveColor(string color) ;
    string GetStoveColor() const ;
    void SetNumberOfFlames(int num) ;
    int GetNumberOfFlames() const ;
    void SetTvSize (int Inches) ;
    int GetTvSize() const ;
    void SetNumberOfSalonObjects(int n) ;
    int GetNumberOfSalonObjects() const ;
    void SetSalonColor (string color) ;
    string GetSalonColor() const;
    void SetNumberOfSofaObjects(int n) ;
    int GetNumberOfSofaObjects() const ;
    void SetSofaColor (string color) ;
    string GetSofaColor() const;
    void SetBedColor(string color) ;
    string GetBedColor() const ;
    void SetShovenirahColor(string color) ;
    string GetShovenirahColor() const ;
};


#endif //BUILDING_APARTMENT_H
