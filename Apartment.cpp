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
void Apartment ::setKitchencolor(Room room) {
    Kitchen.SetRoomColor(room.color) ;
}
void Apartment ::setKitchenheight(Room room) {
    Kitchen.SetRoomHeight(room.height) ;
}
void Apartment ::setKitchenwidth(Room room) {
    Kitchen.SetRoomWidth(room.width) ;
}
void Apartment ::SetFridgeColor(string color) {
    FridgeColor = color ;
}
string Apartment ::GetFridgeColor() const {
    return FridgeColor ;
}
void Apartment ::SetNumberOfFlames(int num) {
    FlamesNumber = num ;
}
int Apartment ::GetNumberOfFlames() const {
    return FlamesNumber ;
}
void Apartment ::SetStoveColor(string color) {
    stovecolor = color ;
}
string Apartment ::GetStoveColor() const {
    return stovecolor ;
}
void Apartment ::SetTvSize(int Inches) {
    TVInches = Inches ;
}
int Apartment ::GetTvSize() const {
    return TVInches ;
}
void Apartment ::SetNumberOfSalonObjects(int n) {
    NumberOfSalonObjects = n ;
}
int Apartment ::GetNumberOfSalonObjects() const {
    return NumberOfSalonObjects ;
}
void Apartment ::SetSalonColor(string color) {
    salonColor = color ;
}
string Apartment ::GetSalonColor() const {
    return salonColor ;
}
void Apartment ::SetNumberOfSofaObjects(int n) {
    NumberOfSofaObjects = n ;
}
int Apartment ::GetNumberOfSofaObjects() const {
    return NumberOfSofaObjects ;
}
void Apartment ::SetSofaColor(string color) {
    sofaColor = color ;
}
string Apartment ::GetSofaColor() const {
    return sofaColor ;
}
void Apartment ::SetBedColor(string color) {
    BedColor = color ;
}
string Apartment ::GetBedColor() const {
    return BedColor ;
}
void Apartment ::SetShovenirahColor (string color) {
    ShovenirahColor = color ;
}
string Apartment ::GetShovenirahColor() const {
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

