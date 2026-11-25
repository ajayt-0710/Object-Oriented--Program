//
// Created by Ajay Thirunavukkarasu on 26/11/26.
//
//
// Created by Ajay Thirunavukkarasu on 25/11/26.
//
#include <iostream>
using namespace std;
class Student {
public:
    string name="Ajay";
    int age=18;
    Student() {
        cout<<"Student constructor"<<endl;
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
};
int main() {
    Student s;

}
