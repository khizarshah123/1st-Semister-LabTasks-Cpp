//Write a program that will ask the user to enter any number and the program checks 
//whether the entered number is  a positive number or negative number
#include <iostream>
using namespace std;
int main() {
float number;
cout << "Enter a number: ";
cin >> number;
if (number > 0) {
cout << "The number " << number << " is positive." << endl;
} else if (number < 0) {
cout<< "The number " << number << " is negative." << endl;
} else {
cout << "The number is zero." << endl;
}
return 0;
}