//Create a Structure called employee that contains two members: 
//an employee number (type int) and the employee’s salary (type float). 
//Ask the user to fill this data for two employees, store it in twovariables of type struct employee, and then display the
//information for each employee.	 
#include <iostream>
using namespace std;

struct Employee {
    int emp_number;  
    float salary;   
};

int main() {
    Employee emp1, emp2;
    
    cout << "Enter employee number for first employee: ";
    cin >> emp1.emp_number;
    cout << "Enter salary for first employee: ";
    cin >> emp1.salary;

    
    cout << "Enter employee number for second employee: ";
    cin >> emp2.emp_number;
    cout << "Enter salary for second employee: ";
    cin >> emp2.salary;


    cout << "\nEmployee 1 Information:" << endl;
    cout << "Employee Number: " << emp1.emp_number << endl;
    cout << "Salary: " << emp1.salary << endl;

    cout << "\nEmployee 2 Information:" << endl;
    cout << "Employee Number: " << emp2.emp_number << endl;
    cout << "Salary: " << emp2.salary << endl;

    return 0;
}