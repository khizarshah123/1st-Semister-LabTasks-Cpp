//Write a C++ program, which takes three int values from the user, and print their addition and average
#include <iostream>
using namespace std;
int main() {
int num1, num2, num3;
int sum;
double average;
cout << "Enter the first integer: ";
cin>> num1;
cout << "Enter the second integer: ";
cin >> num2;
cout << "Enter the third integer: ";
cin >> num3;
sum = num1 + num2 + num3;
average = sum / 3.0; 
cout << "Sum of the numbers: " << sum << endl;
cout << "Average of the numbers: " << average << endl;
return 0;}
