//Write a program that accepts two numbers from the user 
//And prints compares whether both numbers are equal are not
#include <iostream>
using namespace std;
int main() {
float num1,num2;
cout << "Enter the first number: ";
cin >> num1; 
cout << "Enter the second number: ";
cin >> num2;
if (num1 == num2) {
cout << "Both numbers are equal." << endl;}
else {
cout << "The numbers are not equal." << endl;}
return 0;}