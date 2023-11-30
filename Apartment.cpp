#include "Apartment.h"
 Room :: Room(){

}
Room ::Room(double h, double w, string c) {
    height = h ;
    width = w ;
    color = c ;
}
void Room ::SetRoomHeight(double h) {
    height = h ;
}
void Room ::SetRoomWidth(double w)  {
    width = w;
}
double Room ::GetRoomHeight() const {
    return height ;
}
double Room ::GetRoomWidth() const {
    return width ;
}
double Room ::GetRoomArea() const {
    return height * width ;
}
void Room ::SetRoomColor(string c) {
    color = c ;
}
string Room ::GetRoomColor() const {
    return color ;
}
void Kitchen ::SetFridgeColor(string color) {
    FridgeColor = color ;
}
string Kitchen ::GetFridgeColor() const {
    return FridgeColor ;
}
void Kitchen ::SetNumberOfFlames(int num) {
    FlamesNumber = num ;
}
int Kitchen ::GetNumberOfFlames() const {
    return FlamesNumber ;
}
void Kitchen ::SetStoveColor(string color) {
    stovecolor = color ;
}
string Kitchen ::GetStoveColor() const {
    return stovecolor ;
}
void LivingRoom ::SetTvSize(int Inches) {
    TVInches = Inches ;
}
int LivingRoom ::GetTvSize() const {
    return TVInches ;
}
void Salon ::SetNumberOfSalonObjects(int n) {
    NumberOfSalonObjects = n ;
}
int Salon ::GetNumberOfSalonObjects() const {
    return NumberOfSalonObjects ;
}
void Salon ::SetSalonColor(string color) {
    salonColor = color ;
}
string Salon ::GetSalonColor() const {
    return salonColor ;
}
void Sofa ::SetNumberOfSofaObjects(int n) {
    NumberOfSofaObjects = n ;
}
int Sofa ::GetNumberOfSofaObjects() const {
    return NumberOfSofaObjects ;
}
void Sofa ::SetSofaColor(string color) {
    sofaColor = color ;
}
string Sofa ::GetSofaColor() const {
    return sofaColor ;
}
void Bedroom ::SetBedColor(string color) {
    BedColor = color ;
}
string Bedroom ::GetBedColor() const {
    return BedColor ;
}
void Bedroom ::SetShovenirahColor (string color) {
    ShovenirahColor = color ;
}
string Bedroom ::GetShovenirahColor() const {
    return ShovenirahColor ;
}
void Apartment ::SetApartmentFloor(int num) {
    ApartmentFloor = num ;
}
int Apartment ::GetApartmentFloor() const {
    return ApartmentFloor ;
}
void  Apartment ::SetApartmentNumber(int num) {
    ApartmentNumber = num ;
}
int Apartment ::GetApartmentNumber() const {
    return ApartmentNumber ;
}
void Apartment ::SetNumberOfRooms(int num) {
    NumberOfRooms = num ;
}
int Apartment ::GetNumberOfRooms() const {
    return NumberOfRooms ;
}

