//Task # 3 Create an employee class. 
//The member should comprise an int for storing the employee number, and float for the employee’s salary.
// Member functions should allow the user to enter this data and display it. 
//Write a main() function that allows the user to enter data for three employees and display it.
#include <iostream>
using namespace std;

// Employee class definition
class Employee {
private:
    int emp_number;  // Employee number
    float salary;    // Employee salary

public:
    // Function to input data for an employee
    void inputData() {
        cout << "Enter employee number: ";
        cin >> emp_number;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to display data for an employee
    void displayData() const {
        cout << "Employee Number: " << emp_number << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    // Create an array of 3 Employee objects
    Employee employees[3];

    // Loop through each employee and get their data
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter data for employee " << (i + 1) << ":\n";
        employees[i].inputData();
    }

    // Display the data for each employee
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << (i + 1) << " details:\n";
        employees[i].displayData();
    }

    return 0;
}