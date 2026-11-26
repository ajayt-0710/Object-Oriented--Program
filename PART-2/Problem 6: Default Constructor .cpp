#include<iostream>
#include<string>
using namespace std;
// Create a class called Laptop.
//
// Requirements:
//
// Attributes: brand, RAM, price.
// Create a default constructor.
// Initialize default values:
// Brand = Dell
// RAM = 8 GB
// Price = 500
// Display the information.
class Laptop {
public:
    string brand;
    int RAM;
    int price;
    Laptop() {
        cout<<"Enter brand: ";
        cin>>brand;
        cout<<"Enter RAM: ";
        cin>>RAM;
        cout<<"Enter price: ";
        cin>>price;
        cout<<endl;
    }
    void display() {
        cout<<"Brand: "<<brand<<endl;
        cout<<"RAM: "<<RAM<<endl;
        cout<<"Price: "<<price<<endl<<endl;
    }
};
int main() {
    cout<<"ENTER THE BRAND DETAILS"<<endl;
    Laptop l1;
    Laptop l2;
    Laptop l3;
    cout<<"BRAND DETAILS"<<endl;
    l1.display();
    l2.display();
    l3.display();
    return 0;
}