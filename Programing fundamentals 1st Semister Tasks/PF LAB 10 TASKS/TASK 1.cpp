//Task # 1 Create a class having 4 functions, add, sub, muland div. 
//Each function accepts 2 parameters and returns the sum, difference, multiplication and division of these numbers
//Create a main () function that uses the above class.
#include <iostream>
using namespace std;

// Class definition
class Calculator {
public:
    // Function to add two numbers
    float add(float num1, float num2) {
        return num1 + num2;
    }

    // Function to subtract two numbers
    float sub(float num1, float num2) {
        return num1 - num2;
    }

    // Function to multiply two numbers
    float mul(float num1, float num2) {
        return num1 * num2;
    }

    // Function to divide two numbers
    float div(float num1, float num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator calc;

    float num1, num2;
    
    // Get user input for two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculations using the Calculator class
    cout << "Sum: " << calc.add(num1, num2) << endl;
    cout << "Difference: " << calc.sub(num1, num2) << endl;
    cout << "Multiplication: " << calc.mul(num1, num2) << endl;

    // Handle division carefully, check for zero denominator
    float result = calc.div(num1, num2);
    if (num2 != 0) {
        cout << "Division: " << result << endl;
    }

    return 0;
}
