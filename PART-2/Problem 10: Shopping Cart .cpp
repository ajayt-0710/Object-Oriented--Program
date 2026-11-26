// Problem 10: Shopping Cart Constructor
// Create a class called Product.
//
// Requirements:
//
// Attributes: productName, quantity, price.
// Create a parameterized constructor.
// Create a method calculateTotal().
// Create a method displayProduct().
// Total = quantity × price.
//
#include<iostream>
#include<string>
using namespace std;
class Product {
    public:
    string product_name;
    int quantity;
    int price;
    int total;
    Product(string pn, int q, int p) {
        product_name = pn;
        quantity = q;
        price = p;
    }
    void calculateTotal() {
        total = quantity * price;
    }
    void displayproduct() {
        cout<<"Product name: "<<product_name<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Total: "<<total<<endl<<endl;
    }
};
int main() {
    Product p1("Mouse",2,500);
    Product p2("Keyboard",1,1200);
    Product p3("Monitor",3,5000);
    cout<<"PRODUCT 1 DETAILS"<<endl;
    p1.calculateTotal();
    p1.displayproduct();
    cout<<"PRODUCT 2 DETAILS"<<endl;
    p2.calculateTotal();
    p2.displayproduct();
    cout<<"PRODUCT 3 DETAILS"<<endl;
    p3.calculateTotal();
    p3.displayproduct();
    return 0;
}