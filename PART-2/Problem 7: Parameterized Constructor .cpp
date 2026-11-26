// Create a class called Book.
//
// Requirements:
//
// Attributes: title, author, price.
// Create a parameterized constructor.
// Initialize attributes through constructor arguments.
// Create three different objects.
#include<iostream>
#include<string>
using namespace std;
class Book {
public:
    string title;
    string author;
    int price;
    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }
};
int main() {
    Book b1("C++ Basics","John",250);
    Book b2("Java Guide","Smith",350);
    Book b3("Python 101","Alex",300);
}