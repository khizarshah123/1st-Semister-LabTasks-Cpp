//Write a C++ program that takes an uppercase character from the user 
//And display its equivalent lower case character
#include <iostream>
using namespace std;

int main() {
char upperChar;
cout<< "Enter an uppercase character: ";
cin>> upperChar;
if (upperChar >= 'A' && upperChar <= 'Z') {
char lowerChar = upperChar + ('a' - 'A');
cout << "Upper case character: '" << upperChar << "'" << endl;
cout << "Lower case character: '" << lowerChar << "'" << endl;
} else {
cout << "Please enter a valid uppercase letter." << endl;
}
return 0;}
