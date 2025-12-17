// Task.2 
// Write a program in C++ to print the sum of two numbers. 
//	Sample Output:
//The sum of 29 and 30 is : 59
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	
	cout << "Enter 1st number: ";
	cin >> a;
	
	cout << "Enter 2nd number: ";
	cin>> b;
	
	c = a+b;
	cout << "The sum of " << a << " and " << b << " is: " << c <<endl;
	return 0;
}