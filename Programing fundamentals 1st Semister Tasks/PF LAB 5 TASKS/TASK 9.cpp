//Task# 9 write a program that takes an inter as an input and prints its factorial
//Output
//Number :  5
//Factorial : 120 
#include <iostream>
using namespace std;
int main() {
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
    cout << "Factorial is not defined for negative numbers!" << endl;
    return 1; }
    for (int i = 1; i <= number; ++i) {
    factorial *= i; 
    }
    cout << "Number: " << number << endl;
    cout << "Factorial: " << factorial << endl;
    return 0;}

