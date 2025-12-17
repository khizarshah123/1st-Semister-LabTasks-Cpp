//Write a program that will ask the user to enter any number 
//And the program checks whether the entered number is  an even number or odd number
#include <iostream>
using namespace std;
int main() {
int number;
cout << "Enter a number = ";
cin >> number;
if (number % 2 == 0) {
cout << "The number " << number << " is even" << endl;}
else {
cout << "The number " << number << " is odd" << endl;}
return 0;}
