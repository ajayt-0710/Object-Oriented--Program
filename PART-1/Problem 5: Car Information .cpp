// Create a class called Car.
//
// Requirements:
//
// Attributes: brand, model, manufacturingYear, price.
// Method: displayCarDetails().
// Method: isLuxuryCar().
// A car is considered luxury if its price exceeds 50000.

#include<iostream>
#include<string>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int  manufacturing_year;
    int price;
    Car(string b , string m , int y,int p) {
        brand = b;
        model = m;
        manufacturing_year = y;
        price = p;
    }
    void display_Car_Details() {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Manufacturing year: "<<manufacturing_year<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void is_Luxury_Car() {
        if (price > 50000) {
            cout<<"Luxury car"<<endl<<endl;
        }
        else {
            cout<<"Not a Luxury car"<<endl<<endl;
        }
    }
};
int main() {
    cout<<"----------------CAR DETAILS--------------"<<endl;
    Car c1("BMW","M5",2021,75000);
    c1.display_Car_Details();
    c1.is_Luxury_Car();
    Car c2("Toyota","Hycross",2020,30000);
    c2.display_Car_Details();
    c2.is_Luxury_Car();
    Car c3("Audi","ABC",2022,60000);
    c3.display_Car_Details();
    c3.is_Luxury_Car();
    return 0;
}