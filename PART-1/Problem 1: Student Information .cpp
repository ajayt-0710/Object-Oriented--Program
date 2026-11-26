#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
    string name;
    int age;
    int roll;
    Student(string name,int age,int roll) {
        this->name=name;
        this->age=age;
        this->roll=roll;
    }
    void display() {
        cout<<name<<" Details"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll:"<<roll<<endl<<endl;
    }
};
int main() {
    cout<<"-------------STUDENT INFORMATION---------------"<<endl;
    Student s1("Rahul",20,	101);
    s1.display();
    Student s2("Priya",21,	102);
    s2.display();
    Student s3("Alex",19	,103);
    s3.display();
}