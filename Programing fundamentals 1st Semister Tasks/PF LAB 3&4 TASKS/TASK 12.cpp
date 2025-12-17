//Write a program that accepts three numbers from the user 
// A prints "increasing" if the numbers are in increasing order, "decreasing" 
//if the numbers are in decreasing order
#include <iostream>
using namespace std;
int main() {
float num1, num2, num3;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
cout << "Enter the third number: ";
cin >> num3;
if (num1 < num2 && num2 < num3) {
cout << "increasing" << endl;}
else if (num1 > num2 && num2 > num3) {
cout << "decreasing" << endl;}
else{
cout << "neither" << endl;}
return 0;}
