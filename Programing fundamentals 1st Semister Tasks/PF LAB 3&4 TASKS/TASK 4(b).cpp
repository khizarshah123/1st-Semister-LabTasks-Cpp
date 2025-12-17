#include <iostream>
#include <cmath>  // For using abs() function
using namespace std;
int main() {
int number;
cout << "Enter a number: ";
cin >> number;
if (abs(number) >= 10 && abs(number) <= 99) {
cout << "The number " << number << " is a double figure number." << endl;
} else {
cout << "The number " << number << " is not a double figure number." << endl;}
return 0;
}