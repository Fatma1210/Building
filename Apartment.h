#include <iostream>
using namespace std ;
#ifndef BUILDING_APARTMENT_H
#define BUILDING_APARTMENT_H
class Room{
private:
    double height ;
    double width ;
    string color ;
public:
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
class Kitchen : public Room{
private:
    string FridgeColor ;
    string stovecolor ;
    int FlamesNumber ;
public:
    void SetFridgeColor(string color) ;
    string GetFridgeColor() const ;
    void SetStoveColor(string color) ;
    string GetStoveColor() const ;
    void SetNumberOfFlames(int num) ;
    int GetNumberOfFlames() const ;
};
class LivingRoom : public Room{
private:
    int TVInches ;
public:
    void SetTvSize (int Inches) ;
    int GetTvSize() const ;
};
class Salon : public Room{
private:
    int NumberOfSalonObjects ;
    string salonColor ;
public:
    void SetNumberOfSalonObjects(int n) ;
    int GetNumberOfSalonObjects() const ;
    void SetSalonColor (string color) ;
    string GetSalonColor() const;
};
class Sofa : public Room{
private:
    int NumberOfSofaObjects ;
    string sofaColor ;
public:
    void SetNumberOfSofaObjects(int n) ;
    int GetNumberOfSofaObjects() const ;
    void SetSofaColor (string color) ;
    string GetSofaColor() const;
};
class Bedroom : Room{
private:
   Room Clothingroom ;
    string BedColor ;
    string ShovenirahColor ;
public:
    void SetBedColor(string color) ;
    string GetBedColor() const ;
    void SetShovenirahColor(string color) ;
    string GetShovenirahColor() const ;
};
class Bathroom : Room{

};
class Apartment : public Bedroom , public Kitchen , public LivingRoom , public Salon , public Sofa , public Bathroom{
private:
    int NumberOfRooms ;
    int ApartmentNumber ;
    int ApartmentFloor ;
public:
    void SetNumberOfRooms(int num) ;
    int GetNumberOfRooms() const ;
    void SetApartmentNumber(int num) ;
    int GetApartmentNumber() const ;
    void SetApartmentFloor(int num) ;
    int GetApartmentFloor() const ;
};


#endif //BUILDING_APARTMENT_H
