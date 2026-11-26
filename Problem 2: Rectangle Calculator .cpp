#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length;
    int breadth;
    Rectangle(int l,int b) {
        length=l;
        breadth=b;
    }
    void calculate_Area() {
        cout<<"-------------AREA OF RECTANGLE--------------"<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        int area = length * breadth;
        cout<<"Area: "<<area<<endl;
    }
    void calculate_Perimeter() {
        cout<<"-------------PERIMETER OF RECTANGLE-------------"<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        int perimeter = 2 * (length + breadth);
        cout<<"Perimeter: "<<perimeter<<endl;
    }
};
int main() {
    Rectangle t1(5,3);
    Rectangle t2(10,4);
    Rectangle t3(7,7);
    t1.calculate_Area();
    t1.calculate_Perimeter();
    t2.calculate_Area();
    t2.calculate_Perimeter();
    t3.calculate_Area();
    t3.calculate_Perimeter();
    return 0;
}