// Create a class called Calculator.
//
// Requirements:
//
// Create a default constructor.
// Create a constructor accepting one integer.
// Create a constructor accepting two integers.
// Display the initialized values.
#include<iostream>
#include<string>
using namespace std;
class Calculator {
    public:
        int nums1=0;
        int nums2=0;
    Calculator() {
        cout<<"num1:"<<nums1<<endl;
        cout<<"num2:"<<nums2<<endl<<endl;
    }
    Calculator(int num1) {
        this->nums1 = num1;
        cout<<"num1:"<<nums1<<endl;
        cout<<"num2:"<<nums2<<endl<<endl;
    }
    Calculator(int num1,int num2) {
        this->nums1 = num1;
        this->nums2 = num2;
        cout<<"num1:"<<nums1<<endl;
        cout<<"num2:"<<nums2<<endl<<endl;
    }
};
int main() {
    Calculator c1;
    Calculator c2(10);
    Calculator c3(10,20);
}