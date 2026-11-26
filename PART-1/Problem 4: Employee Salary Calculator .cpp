// Create a class called Employee.
//
// Requirements:
//
// Attributes: employeeName, employeeID, monthlySalary.
// Method: displayDetails().
// Method: calculateAnnualSalary().
// Annual salary = monthly salary × 12.
#include<iostream>
using namespace std;
class Employee {
    public:
    string employee_name;
    int employee_ID;
    int monthly_salary;
    Employee(string name, int id, int salary) {
        employee_name=name;
        employee_ID=id;
        monthly_salary=salary;
    }
    void diplay_details() {
        cout<<"name: "<<employee_name<<endl;
        cout<<"id: "<<employee_ID<<endl;
        cout<<"salary: "<<monthly_salary<<endl;
    }
    void calculateAnnualSalary() {
        int annual_salary;
        annual_salary = monthly_salary * 12;
        cout<<"Enter annual salary: "<<annual_salary<<endl<<endl;
    }
};
int main() {
    cout<<"-------------------EMPLOYEE DETAILS---------------"<<endl;
    Employee emp1("John",1001,5000);
    emp1.diplay_details();
    emp1.calculateAnnualSalary();
    Employee emp2("Sarah",1002,7000);
    emp2.diplay_details();
    emp2.calculateAnnualSalary();
    Employee emp3("David",1003,3500);
    emp3.diplay_details();
    emp3.calculateAnnualSalary();
    return 0;
}
