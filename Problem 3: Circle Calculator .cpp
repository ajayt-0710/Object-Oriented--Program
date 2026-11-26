#include<iostream>
using namespace std;
class Circle {
public:
    float radius;
    float area;
    float perimeter;
    Circle(int r) {
        radius=r;
    }
    void calculateArea() {
        cout<<"-------------------AREA OF CIRCLE---------------"<<endl;
        cout<<"Enter radius: "<<radius<<endl;
        area=3.14*radius*radius;
        cout<<"Area: "<<area<<endl;
    }
    void calculatePerimeter() {
        cout<<"-------------------PERIMETER OF PERIMETER--------------"<<endl;
        cout<<"Enter radius: "<<radius<<endl;
        perimeter=2*3.14*radius;
        cout<<"Perimeter: "<<perimeter<<endl;
    }
};
int main() {
    Circle c1(1);
    c1.calculateArea();
    c1.calculatePerimeter();
    Circle c2(5);
    c2.calculateArea();
    c2.calculatePerimeter();
    Circle c3(7);
    c3.calculateArea();
    c3.calculatePerimeter();
    return 0;

}