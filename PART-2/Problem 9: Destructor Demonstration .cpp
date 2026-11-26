// Create a class called Demo.
//
// Requirements:
//
// Constructor should print "Object Created".
// Destructor should print "Object Destroyed".
// Create an object inside a function.
// Observe when the destructor is called.
// Test Cases:
//
// Create an object inside main().
// Create an object inside a separate function.
// Create two local objects and observe their destruction order.

#include<iostream>
#include<string>
using namespace std;
class A {
    public:
    A() {
        cout<<"Object Created"<<endl;
    }
    ~A() {
        cout<<"Object Destroyed"<<endl;
    }
};
void object_creating() {
    A a2;
}

int main() {
    cout<<"Create an object inside main()"<<endl;
    A a1; // Create an object inside main().
    cout<<"Create an object inside a separate function"<<endl;

    object_creating(); // Create an object inside a separate function.
cout<<"Create two local objects and observe their destruction order.";
    A a3;  // Create two local objects and observe their destruction order.

    A a4; // Create two local objects and observe their destruction order.


}
